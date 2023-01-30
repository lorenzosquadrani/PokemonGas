# PokemonGas
Facciamo un gioco di pokemon per Gas!

# Get Started
1.  Creiamo una cartella chiamata CheccoGay, e ci cloniamo dentro questa repo.

    ```bash
    mkdir CheccoGay
    cd PokemonFireRed
    git clone https://github.com/lorenzosquadrani/PokemonGas.git
    ```

3.  Dentro CheccoGay (__non nella repo__), scarichiamo e installiamo il compilatore. 
    
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
    Nella cartella CheccoGay clona la repository, e compila con qmake.
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

# Usare le cose

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




