# PokemonGas
Facciamo un gioco di pokemon per Gas!

## Get Started
1.  Creiamo una cartella chiamata Checco***, e ci cloniamo dentro questa repo.

    ```bash
    mkdir Checco***
    cd Checco***
    git clone https://github.com/lorenzosquadrani/PokemonGas.git
    ```

3.  Dentro Checco*** (__non nella repo__), scarichiamo e installiamo il compilatore. 
    
    ```bash
    git clone https://github.com/pret/agbcc
    cd agbcc
    ./build.sh
    ./install.sh ../PokemonGas/pokefirered
    ```

4.  Installiamo VisualBoyAdvance, per testare la rom ogni volta che la modifichiamo. 
    Lo potete scaricare da qui https://visualboyadvance.org/download/. 
    La versione per linux non so perchè ma non funziona. Io scarico la versione per windows e uso wine:
    
    ```bash
    sudo apt install wine64
    wine visualboyadvance.exe
    ```

5.  Ora installiamo Porymap, per modificare le cose. 
    Nella cartella Checco*** clona la repository, e compila con qmake.
    ```bash
    git clone https://github.com/huderlem/porymap.git
    cd porymap
    qmake
    make
    ```
    **Nota: se non hai qmake, sarà perché non hai proprio Qt (Graphic Library). Installala deficiente (comando sotto).**
    ```bash
    sudo apt install qtbase5-dev qt5-qmake
    ```
    Per controllare che tutto sia filato liscio, runna questo:
    ```bash
    qmake --version
    ```
    Dovrebbe darti qualcosa tipo questo:
    ```bash
    QMake version 3.1
    Using Qt version 5.15.3 in /usr/lib/x86_64-linux-gnu
    ```

6. Installiamo Poryscript.
   Scarica la release di linux da qua: https://github.com/huderlem/poryscript/releases.
   

## Usare le cose

1.  **Creare la ROM**
    La ROM è un file binario .gba, e si crea compilando tutto il codice che c'è in PokemonGas/pokefirered con il comando:

    ```bash
    make
    ```

    Ovviamente ci mette un po' a compilare, che è scomodo per provare velocemente le modifiche fatte. Si velocizza un po' se usiamo più processori in parallelo (di default ne usa solo 1). Per sapere quanti processori abbiamo usiamo il comando:
    ```bash
    nproc
    ```
    A me tipo dà 4. Per usarli tutti quando compilo:
    ```bash
    make -j4
    ```
2.  **PoryMap**
    Intanto lo apriamo:
    ```bash
    cd porymap
    ./porymap
    ```
    Poi facciamo File->Open Project e selezioniamo la cartella PokemonGas/pokefirered. A sto punto si capisce subito come si usa.

3. **Rinominare le cose**
    Bisogna combinare visual studio per rinominare nel contenuto di tutti i files, e linux bash per rinominare i nomi dei files.
    Per esempio così ho rinominato OldaleTown in BolognaTown:
    - Con VScode ho cercato in tutta la cartella pokemerald 'oldale', 'Oldale', 'OLDALE', e li ho sostituiti con
    'bologna', 'Bologna', 'BOLOGNA'
    - Ho eseguito i comandi:
        ```bash
        cd pokeemerald
        find ./ -name "*oldale*" -exec rename 's/oldale/bologna/' '{}' \;
        find ./ -name "*Oldale*" -exec rename 's/Oldale/Bologna/' '{}' \;
        find ./ -name "*OLDALE*" -exec rename 's/OLDALE/BOLOGNA/' '{}' \;
        ```
      Per controllare che abbia fatto bene:
        ```bash
        find ./ -iname "*oldale*"
        ```
4. **Scripts**
Tutte le cose che succedono nel gioco sono *eventi*. Ad ogni evento viene assegnato uno *script*.
Ogni mappa ha i suoi eventi, definiti in `/data/maps/nome_mappa/map.json`.
Ogni mappa ha i suoi scripts, definiti in `/data/maps/nome_mappa/scripts.inc`.
Gli scripts sono scritti in un linguaggio abbastanza intuitivo ma macchinoso.
Noi usiamo un linguaggio più high-level, chiamato poryscript.
Quindi se dobbiamo modificare gli scripts di una mappa, creiamo un nuovo file chiamato `scripts.pory`.
Dentro ci copiamo il contenuto dello `scripts.inc` originale, così:
    ```bash
    raw `
    contenuto del file scripts.inc
    ` 
    ```
(vedi esempio in RiminiTown).
Tutte le funzioni che possiamo usare nei nostri scripts sono descritte in `/asm/macros/events.inc`.
Tutte le variabili e le flags che possiamo usare nei nostri scripts sono elencate in `/include/constants/vars.h` e `/include/constants/flags.h`.

5. **Cancellare una mappa**
Bisogna cancellare i files e le references nei file che rimangono:
- Cancella la cartella data/maps/NOMEMAPPA
- Cancella la cartella data/layouts/NOMEMAPPA, *se esiste* (potrebbe non esistere perché il layout è condiviso con altre mappe)
- Cerca NOMEMAPPA con VSCode, e cancella tutte le occorrenze che trovi
- Se la mappa è un centro Pokemon cerca anche per MAP_NOME_MAPPA, ed elimina le occorrenze
- prova a compilare, se hai lasciato qualcosa in giro te lo dice

