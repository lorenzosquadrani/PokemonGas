	.include "MPlayDef.s"

	.equ	mus_romagna_mia_grp, voicegroup011
	.equ	mus_romagna_mia_pri, 0
	.equ	mus_romagna_mia_rev, reverb_set+50
	.equ	mus_romagna_mia_mvl, 80
	.equ	mus_romagna_mia_key, 0
	.equ	mus_romagna_mia_tbs, 1
	.equ	mus_romagna_mia_exg, 1
	.equ	mus_romagna_mia_cmp, 1

	.section .rodata
	.global	mus_romagna_mia
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

mus_romagna_mia_1:
	.byte	KEYSH , mus_romagna_mia_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , 190*mus_romagna_mia_tbs/2
	.byte	W24
	.byte		VOICE , 35
	.byte		VOL   , 127*mus_romagna_mia_mvl/mxv
	.byte		PAN   , c_v+4
	.byte	W01
	.byte	W23
	.byte	W01
	.byte	W01
	.byte	W22
@ 001   ----------------------------------------
	.byte	W72
@ 002   ----------------------------------------
	.byte		N20   , Gn0 , v108
	.byte	W72
@ 003   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 004   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 005   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 006   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 007   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 008   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 009   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 010   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 011   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 012   ----------------------------------------
	.byte		        An0 
	.byte	W72
@ 013   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 014   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 015   ----------------------------------------
mus_romagna_mia_1_015:
	.byte		N20   , An1 , v108
	.byte	W24
	.byte		        Gn1 
	.byte	W24
	.byte		        En1 
	.byte	W24
	.byte	PEND
@ 016   ----------------------------------------
mus_romagna_mia_1_016:
	.byte		N20   , Dn1 , v108
	.byte	W48
	.byte		        An0 
	.byte	W24
	.byte	PEND
@ 017   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 018   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 019   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 020   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 021   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 022   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 023   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 024   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 025   ----------------------------------------
	.byte		        An0 
	.byte	W72
@ 026   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 027   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 028   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 029   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 030   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 031   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 032   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 033   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 034   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 035   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 036   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 037   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 038   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 039   ----------------------------------------
	.byte		        Dn2 
	.byte	W72
@ 040   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 041   ----------------------------------------
	.byte		        Dn2 
	.byte	W72
@ 042   ----------------------------------------
	.byte		        Dn1 , v080
	.byte	W72
@ 043   ----------------------------------------
	.byte		        An1 , v108
	.byte	W72
@ 044   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 045   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 046   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_015
@ 048   ----------------------------------------
	.byte		N20   , Dn1 , v108
	.byte	W72
@ 049   ----------------------------------------
	.byte	W72
@ 050   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 051   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 052   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 053   ----------------------------------------
	.byte		        Bn0 
	.byte	W72
@ 054   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 055   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 056   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 057   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 058   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 059   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 060   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 061   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 062   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 063   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 064   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 065   ----------------------------------------
	.byte	W72
@ 066   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 067   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 068   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 069   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 070   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 071   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 072   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 073   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 074   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 075   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 076   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 077   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 078   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 079   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 080   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 081   ----------------------------------------
mus_romagna_mia_1_081:
	.byte		N20   , Dn1 , v108
	.byte	W24
	.byte		        En1 
	.byte	W24
	.byte		        Fs1 
	.byte	W24
	.byte	PEND
@ 082   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 083   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 084   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 085   ----------------------------------------
	.byte		        Gs1 
	.byte	W72
@ 086   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 087   ----------------------------------------
	.byte		        An0 
	.byte	W72
@ 088   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 089   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 090   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 091   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 092   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 093   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 094   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 095   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_015
@ 096   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_016
@ 097   ----------------------------------------
	.byte		N20   , Dn1 , v108
	.byte	W72
@ 098   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 099   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 100   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 101   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 102   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 103   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 104   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 105   ----------------------------------------
	.byte		        An0 
	.byte	W72
@ 106   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 107   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 108   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 109   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 110   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 111   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 112   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 113   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 114   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 115   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 116   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 117   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 118   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 119   ----------------------------------------
	.byte		        Dn2 
	.byte	W72
@ 120   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 121   ----------------------------------------
	.byte		        Dn2 
	.byte	W72
@ 122   ----------------------------------------
	.byte		        Dn1 , v080
	.byte	W72
@ 123   ----------------------------------------
	.byte		        An1 , v108
	.byte	W72
@ 124   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 125   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 126   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 127   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_015
@ 128   ----------------------------------------
	.byte		N20   , Dn1 , v108
	.byte	W72
@ 129   ----------------------------------------
	.byte	W72
@ 130   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 131   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 132   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 133   ----------------------------------------
	.byte		        Bn0 
	.byte	W72
@ 134   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 135   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 136   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 137   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 138   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 139   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 140   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 141   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 142   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 143   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 144   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 145   ----------------------------------------
	.byte	W72
@ 146   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 147   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 148   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 149   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 150   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 151   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 152   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 153   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 154   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 155   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 156   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 157   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 158   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 159   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 160   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 161   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_081
@ 162   ----------------------------------------
	.byte		N20   , Gn1 , v108
	.byte	W72
@ 163   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 164   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 165   ----------------------------------------
	.byte		        Gs1 
	.byte	W72
@ 166   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 167   ----------------------------------------
	.byte		        An0 
	.byte	W72
@ 168   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 169   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 170   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 171   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 172   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 173   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 174   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 175   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_015
@ 176   ----------------------------------------
	.byte		N20   , Dn1 , v108
	.byte	W72
@ 177   ----------------------------------------
	.byte	W72
@ 178   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 179   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 180   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 181   ----------------------------------------
	.byte		        Bn0 
	.byte	W72
@ 182   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 183   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 184   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 185   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 186   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 187   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 188   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 189   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 190   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 191   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 192   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 193   ----------------------------------------
	.byte	W72
@ 194   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 195   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 196   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 197   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 198   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 199   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 200   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 201   ----------------------------------------
	.byte		N20   
	.byte	W72
@ 202   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 203   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 204   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 205   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 206   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 207   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 208   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 209   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_081
@ 210   ----------------------------------------
	.byte		N20   , Gn1 , v108
	.byte	W72
@ 211   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 212   ----------------------------------------
	.byte		        Gn1 
	.byte	W72
@ 213   ----------------------------------------
	.byte		        Gs1 
	.byte	W72
@ 214   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 215   ----------------------------------------
	.byte		        An0 
	.byte	W72
@ 216   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 217   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 218   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 219   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 220   ----------------------------------------
	.byte		        En1 
	.byte	W72
@ 221   ----------------------------------------
	.byte		        An1 
	.byte	W72
@ 222   ----------------------------------------
	.byte		        Dn1 
	.byte	W72
@ 223   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_015
@ 224   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_1_016
@ 225   ----------------------------------------
	.byte		N20   , Dn1 , v108
	.byte	W72
@ 226   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_romagna_mia_2:
	.byte	KEYSH , mus_romagna_mia_key+0
@ 000   ----------------------------------------
	.byte	W24
	.byte	W01
	.byte		VOICE , 24
	.byte	W01
	.byte		PAN   , c_v-16
	.byte		VOL   , 127*mus_romagna_mia_mvl/mxv
	.byte	W24
	.byte	W01
	.byte	W01
	.byte	W01
	.byte	W19
@ 001   ----------------------------------------
	.byte	W72
@ 002   ----------------------------------------
	.byte	W23
	.byte		N03   , Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte	W01
	.byte		        Bn2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 003   ----------------------------------------
	.byte	W24
	.byte		N04   , Bn2 
	.byte		N04   , Dn3 
	.byte		N04   , Gn3 , v100
	.byte	W24
	.byte		N03   , Bn2 , v096
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 , v100
	.byte	W24
@ 004   ----------------------------------------
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 
	.byte	W23
	.byte		N03   , Dn3 
	.byte	W01
	.byte		        Bn2 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
@ 005   ----------------------------------------
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W23
	.byte		        Bn2 
	.byte		N03   , Gn3 
	.byte	W01
	.byte		        Dn3 , v096
	.byte	W24
@ 006   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N04   , Dn3 
	.byte		N04   , Fs3 
	.byte	W23
	.byte		N03   , An2 , v096
	.byte		N03   , Dn3 
	.byte	W01
	.byte		        Fs3 , v100
	.byte	W24
@ 007   ----------------------------------------
	.byte	W24
	.byte	W01
	.byte		N05   , An2 
	.byte		N05   , Dn3 
	.byte		N04   , Fs3 , v096
	.byte	W23
	.byte		        An2 , v100
	.byte		N04   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
@ 008   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 
	.byte	W23
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 
	.byte		N02   , Fs3 , v096
	.byte	W24
	.byte	W01
@ 009   ----------------------------------------
	.byte	W23
	.byte		N03   , Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W23
	.byte		        Fs3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
@ 010   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v096
	.byte		N02   , En3 , v100
	.byte		N03   , Gn3 
	.byte	W23
	.byte		N02   , En3 
	.byte	W01
	.byte		        Cs3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte	W01
@ 011   ----------------------------------------
	.byte	W24
	.byte		        Cs3 , v096
	.byte		N04   , En3 , v100
	.byte		N04   , Gn3 
	.byte	W23
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
@ 012   ----------------------------------------
	.byte	W24
	.byte		N04   , Cs3 
	.byte		N04   , En3 
	.byte		N04   , Gn3 
	.byte	W23
	.byte		N03   , Cs3 , v096
	.byte	W01
	.byte		N04   , En3 , v100
	.byte		N04   , Gn3 
	.byte	W24
@ 013   ----------------------------------------
	.byte	W23
	.byte		N03   , Cs3 
	.byte		N03   , En3 
	.byte	W01
	.byte		N04   , Gn3 , v096
	.byte	W24
	.byte		N03   , Cs3 , v100
	.byte		N04   , En3 
	.byte		N04   , Gn3 
	.byte	W24
@ 014   ----------------------------------------
	.byte	W23
	.byte		N03   , An2 , v096
	.byte		N02   , Dn3 
	.byte		N02   , Fs3 , v100
	.byte	W24
	.byte		N03   , An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
	.byte		N21   , An2 , v100
	.byte	W01
@ 015   ----------------------------------------
	.byte	W23
	.byte		        Bn2 
	.byte	W24
	.byte		N20   , Cs3 
	.byte	W24
	.byte		N09   , Dn3 
	.byte	W01
@ 016   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		N03   , En3 , v096
	.byte	W01
	.byte		        An2 , v100
	.byte		N03   , Cs3 
	.byte	W23
	.byte		        An2 
	.byte	W01
@ 017   ----------------------------------------
	.byte		        Dn3 
	.byte		N04   , Fs3 
	.byte	W72
@ 018   ----------------------------------------
	.byte	W24
	.byte		N03   , An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W23
	.byte		        An2 
	.byte	W01
	.byte		        Dn3 
	.byte		N03   , Fn3 
	.byte	W24
@ 019   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N04   , Dn3 
	.byte		N04   , Fn3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 
	.byte	W24
@ 020   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N04   , Dn3 
	.byte		N04   , Fn3 
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 
	.byte	W24
@ 021   ----------------------------------------
	.byte	W24
	.byte		        An2 , v096
	.byte		N04   , Dn3 , v100
	.byte		N04   , Fn3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 , v100
	.byte	W24
@ 022   ----------------------------------------
	.byte	W24
	.byte		        An2 , v096
	.byte		N04   , Cs3 , v100
	.byte		N04   , En3 , v096
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Cs3 
	.byte		N03   , En3 
	.byte	W24
@ 023   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N04   , Cs3 
	.byte		N04   , En3 , v096
	.byte	W24
	.byte		        An2 
	.byte		N04   , Cs3 , v100
	.byte		N03   , En3 
	.byte	W24
@ 024   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N04   , Cs3 
	.byte		N04   , En3 
	.byte	W24
	.byte		N03   , An2 
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte	W24
@ 025   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v096
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte	W24
@ 026   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        An2 
	.byte		N03   , Cs3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte	W24
@ 027   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v096
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , En3 
	.byte	W01
	.byte		        Cs3 , v096
	.byte	W24
@ 028   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Cs3 
	.byte		N03   , En3 
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        An2 , v100
	.byte		N03   , En3 , v096
	.byte	W24
@ 029   ----------------------------------------
mus_romagna_mia_2_029:
	.byte	W23
	.byte		N03   , An2 , v100
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v096
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 , v100
	.byte	W24
	.byte	W01
	.byte	PEND
@ 030   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fn3 , v096
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fn3 , v100
	.byte	W24
	.byte	W01
@ 031   ----------------------------------------
	.byte	W23
	.byte		        Dn3 , v096
	.byte	W01
	.byte		        An2 , v100
	.byte		N03   , Fn3 
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fn3 , v100
	.byte	W24
@ 032   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v096
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W24
@ 033   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fn3 , v100
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Fn3 , v100
	.byte	W24
@ 034   ----------------------------------------
mus_romagna_mia_2_034:
	.byte	W23
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 
	.byte	W01
	.byte		        Fn3 
	.byte	W23
	.byte		        An2 , v096
	.byte	W01
	.byte		        Dn3 , v100
	.byte		N03   , Fn3 
	.byte	W24
	.byte	PEND
@ 035   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fn3 , v100
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , Fn3 
	.byte	W24
@ 036   ----------------------------------------
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Cn3 , v100
	.byte		N03   , Fs3 
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Cn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte	W01
@ 037   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v100
	.byte		N03   , Cn3 , v096
	.byte		N04   , Fs3 
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Cn3 
	.byte		N03   , Fs3 
	.byte	W24
@ 038   ----------------------------------------
	.byte	W24
	.byte		        As2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte		N04   , As2 , v096
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 
	.byte	W24
@ 039   ----------------------------------------
	.byte	W24
	.byte		N03   , As2 , v100
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 
	.byte	W24
	.byte		N03   , As2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Gn3 
	.byte	W24
@ 040   ----------------------------------------
	.byte	W24
	.byte		N04   , As2 
	.byte		N04   , Dn3 , v100
	.byte		N04   , Gn3 
	.byte	W24
	.byte		        As2 
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 , v096
	.byte	W24
@ 041   ----------------------------------------
	.byte	W24
	.byte		N03   , As2 
	.byte		N03   , Dn3 , v100
	.byte		N04   , Gn3 
	.byte	W23
	.byte		N03   , Dn3 
	.byte	W01
	.byte		        As2 
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 042   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v096
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 , v100
	.byte		N03   , Fn3 
	.byte	W24
@ 043   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W24
	.byte		        An2 
	.byte		N04   , Dn3 , v096
	.byte		N04   , Fn3 , v100
	.byte	W24
@ 044   ----------------------------------------
	.byte	W23
	.byte		N03   , An2 , v096
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte	W01
	.byte		        Ds3 
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 , v096
	.byte	W24
	.byte	W01
@ 045   ----------------------------------------
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte	W24
	.byte	W01
@ 046   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte	W01
@ 047   ----------------------------------------
mus_romagna_mia_2_047:
	.byte		N21   , An2 , v100
	.byte	W24
	.byte		N22   , Bn2 , v096
	.byte	W24
	.byte		N21   , Cs3 
	.byte	W23
	.byte		N06   , Dn3 
	.byte	W01
	.byte	PEND
@ 048   ----------------------------------------
	.byte	W72
@ 049   ----------------------------------------
	.byte	W72
@ 050   ----------------------------------------
	.byte	W23
	.byte		N03   , Fs3 , v100
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 051   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W24
@ 052   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 053   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W23
	.byte		N03   
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        An2 , v096
	.byte	W24
@ 054   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte	W01
	.byte		        Cs3 , v096
	.byte		N03   , En3 
	.byte		N04   , Gn3 
	.byte	W24
@ 055   ----------------------------------------
	.byte	W24
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte		N04   , Gn3 
	.byte	W24
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte		N04   , Gn3 , v100
	.byte	W24
@ 056   ----------------------------------------
	.byte	W23
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte		        Cs3 , v096
	.byte	W01
	.byte		        En3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 057   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v100
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte		N04   , Gn3 
	.byte	W24
@ 058   ----------------------------------------
	.byte	W23
	.byte		N03   , Cs3 , v096
	.byte	W01
	.byte		        En3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte		        Cs3 , v100
	.byte		N03   , En3 , v096
	.byte		N03   , Gn3 
	.byte	W24
@ 059   ----------------------------------------
	.byte	W24
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte		N04   , Gn3 , v096
	.byte	W24
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 060   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte	W01
	.byte		        Gn3 
	.byte	W23
	.byte		        Cs3 
	.byte		N03   , Gn3 , v096
	.byte	W01
	.byte		        En3 , v100
	.byte	W24
@ 061   ----------------------------------------
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte		N04   , Gn3 , v100
	.byte	W24
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v096
	.byte		N03   , Gn3 
	.byte	W24
@ 062   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
@ 063   ----------------------------------------
	.byte	W23
	.byte		        Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        An2 
	.byte	W23
	.byte		N03   
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W01
@ 064   ----------------------------------------
	.byte	W72
@ 065   ----------------------------------------
	.byte	W72
@ 066   ----------------------------------------
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		N03   
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
@ 067   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 068   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 , v100
	.byte		N04   , Fs3 , v096
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N04   , Fs3 , v100
	.byte	W24
@ 069   ----------------------------------------
	.byte	W24
	.byte		N03   , An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , Fs3 
	.byte	W24
@ 070   ----------------------------------------
	.byte	W23
	.byte		        Bn2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
@ 071   ----------------------------------------
	.byte	W24
	.byte		N04   , Bn2 , v100
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 , v096
	.byte	W23
	.byte		N03   , Gn3 , v100
	.byte	W01
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
@ 072   ----------------------------------------
	.byte	W23
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte		        Dn3 , v100
	.byte	W01
	.byte		        Bn2 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
@ 073   ----------------------------------------
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 
	.byte	W24
@ 074   ----------------------------------------
	.byte	W23
	.byte		        Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W01
	.byte		        An2 , v096
	.byte	W24
	.byte		N03   
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
@ 075   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
	.byte		N03   
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte	W24
@ 076   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W01
	.byte		        En3 , v100
	.byte	W23
	.byte		        Gn3 
	.byte	W01
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte	W24
@ 077   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 , v100
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        Cs3 , v096
	.byte		N03   , En3 
	.byte	W24
@ 078   ----------------------------------------
	.byte	W23
	.byte		        Fs3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
@ 079   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v096
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W24
@ 080   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte	W01
	.byte		        Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 081   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
@ 082   ----------------------------------------
	.byte	W24
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 
	.byte	W23
	.byte		        Dn3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W01
	.byte		        Bn2 , v100
	.byte	W24
@ 083   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte		N03   , Dn3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte	W01
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
@ 084   ----------------------------------------
	.byte	W24
	.byte		        Gs2 , v096
	.byte		N03   , Bn2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fn3 
	.byte	W24
	.byte		        Gs2 , v096
	.byte		N03   , Bn2 , v100
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 
	.byte	W24
@ 085   ----------------------------------------
	.byte	W23
	.byte		N03   , Gs2 , v096
	.byte		N03   , Fn3 
	.byte	W01
	.byte		        Bn2 , v100
	.byte		N03   , Dn3 
	.byte	W23
	.byte		        Gs2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v096
	.byte	W01
	.byte		        Bn2 , v100
	.byte	W24
@ 086   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N04   , Dn3 
	.byte		N04   , Fs3 , v096
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
@ 087   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
@ 088   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte	W01
@ 089   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 090   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v100
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 , v096
	.byte		N03   , En3 , v100
	.byte		N03   , Gn3 
	.byte	W24
@ 091   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
	.byte		        Cs3 , v096
	.byte		N03   , En3 , v100
	.byte		N03   , Gn3 
	.byte	W24
@ 092   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 , v096
	.byte		N03   , En3 
	.byte	W01
	.byte		        Gn3 
	.byte	W24
@ 093   ----------------------------------------
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 , v100
	.byte	W24
@ 094   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
	.byte		        An2 
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        Dn3 , v100
	.byte	W24
@ 095   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        Dn3 
	.byte	W23
	.byte		N03   
	.byte		N03   , Fs3 , v096
	.byte	W01
	.byte		        An2 , v100
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W01
@ 096   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		        An2 
	.byte		N03   , Cs3 
	.byte	W01
	.byte		        En3 
	.byte	W23
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte	W01
@ 097   ----------------------------------------
	.byte		        Fs3 
	.byte	W72
@ 098   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W23
	.byte		        An2 , v096
	.byte	W01
	.byte		        Dn3 , v100
	.byte		N03   , Fn3 , v096
	.byte	W24
@ 099   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v100
	.byte		N04   , Dn3 , v096
	.byte		N04   , Fn3 
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 
	.byte	W24
@ 100   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N04   , Dn3 , v096
	.byte		N04   , Fn3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 
	.byte	W24
@ 101   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N04   , Dn3 , v096
	.byte		N04   , Fn3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 , v096
	.byte	W24
@ 102   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N04   , Cs3 , v096
	.byte		N04   , En3 , v100
	.byte	W24
	.byte		N03   , An2 , v096
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v100
	.byte	W24
@ 103   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N04   , Cs3 , v096
	.byte		N04   , En3 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N04   , Cs3 , v100
	.byte		N03   , En3 , v096
	.byte	W24
@ 104   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v100
	.byte		N04   , Cs3 
	.byte		N04   , En3 
	.byte	W24
	.byte		N03   , An2 
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v096
	.byte	W24
@ 105   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Cs3 
	.byte		N03   , En3 
	.byte	W24
	.byte		        An2 
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 , v096
	.byte	W24
@ 106   ----------------------------------------
	.byte	W23
	.byte		        En3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Cs3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 , v096
	.byte	W24
@ 107   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , En3 , v096
	.byte	W01
	.byte		        Cs3 , v100
	.byte	W24
@ 108   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , En3 , v100
	.byte	W24
@ 109   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_2_029
@ 110   ----------------------------------------
	.byte	W23
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v100
	.byte	W24
	.byte	W01
@ 111   ----------------------------------------
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , Fn3 
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fn3 , v100
	.byte	W24
@ 112   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W24
@ 113   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , Fn3 , v096
	.byte	W24
@ 114   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_2_034
@ 115   ----------------------------------------
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Fn3 , v100
	.byte	W24
@ 116   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Cn3 
	.byte		N03   , Fs3 , v096
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Cn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte	W01
@ 117   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N03   , Cn3 , v100
	.byte		N04   , Fs3 , v096
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Cn3 
	.byte		N03   , Fs3 
	.byte	W24
@ 118   ----------------------------------------
	.byte	W24
	.byte		        As2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte		N04   , As2 , v096
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 , v100
	.byte	W24
@ 119   ----------------------------------------
	.byte	W24
	.byte		N03   , As2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N04   , Gn3 , v096
	.byte	W24
	.byte		N03   , As2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
@ 120   ----------------------------------------
	.byte	W24
	.byte		N04   , As2 , v096
	.byte		N04   , Dn3 , v100
	.byte		N04   , Gn3 , v096
	.byte	W24
	.byte		        As2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N04   , Gn3 , v100
	.byte	W24
@ 121   ----------------------------------------
	.byte	W24
	.byte		N03   , As2 , v096
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 
	.byte	W23
	.byte		N03   , Dn3 
	.byte	W01
	.byte		        As2 
	.byte		N03   , Gn3 
	.byte	W24
@ 122   ----------------------------------------
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v096
	.byte	W23
	.byte		        Dn3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Fn3 
	.byte	W24
@ 123   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N04   , Dn3 
	.byte		N04   , Fn3 , v100
	.byte	W24
@ 124   ----------------------------------------
	.byte	W23
	.byte		N03   , An2 
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Cs3 
	.byte		N03   , En3 
	.byte	W24
	.byte	W01
@ 125   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 , v096
	.byte	W24
	.byte		        An2 
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte	W24
	.byte	W01
@ 126   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
	.byte	W01
@ 127   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_2_047
@ 128   ----------------------------------------
	.byte	W72
@ 129   ----------------------------------------
	.byte	W72
@ 130   ----------------------------------------
	.byte	W23
	.byte		N03   , Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 131   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 132   ----------------------------------------
mus_romagna_mia_2_132:
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte	PEND
@ 133   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W23
	.byte		N03   
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        An2 
	.byte	W24
@ 134   ----------------------------------------
mus_romagna_mia_2_134:
	.byte	W23
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte		N04   , Gn3 
	.byte	W24
	.byte	PEND
@ 135   ----------------------------------------
	.byte	W24
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 , v096
	.byte		N04   , Gn3 
	.byte	W24
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v100
	.byte		N04   , Gn3 , v096
	.byte	W24
@ 136   ----------------------------------------
	.byte	W23
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 137   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte		        Cs3 , v096
	.byte		N03   , En3 
	.byte		N04   , Gn3 , v100
	.byte	W24
@ 138   ----------------------------------------
	.byte	W23
	.byte		N03   , Cs3 
	.byte	W01
	.byte		        En3 , v096
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 , v100
	.byte	W24
@ 139   ----------------------------------------
	.byte	W24
	.byte		        Cs3 , v096
	.byte		N03   , En3 , v100
	.byte		N04   , Gn3 , v096
	.byte	W24
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
@ 140   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v096
	.byte		N03   , En3 , v100
	.byte	W01
	.byte		        Gn3 
	.byte	W23
	.byte		        Cs3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W01
	.byte		        En3 
	.byte	W24
@ 141   ----------------------------------------
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N04   , Gn3 
	.byte	W24
	.byte		N03   , Cs3 
	.byte		N03   , En3 , v096
	.byte		N03   , Gn3 
	.byte	W24
@ 142   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 143   ----------------------------------------
	.byte	W23
	.byte		        Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W01
	.byte		        An2 , v100
	.byte	W23
	.byte		N03   
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W01
@ 144   ----------------------------------------
	.byte	W72
@ 145   ----------------------------------------
	.byte	W72
@ 146   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte		N03   
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte	W24
@ 147   ----------------------------------------
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte		N04   , An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
@ 148   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 , v100
	.byte		N04   , Fs3 , v096
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 
	.byte		N04   , Fs3 , v096
	.byte	W24
@ 149   ----------------------------------------
	.byte	W24
	.byte		N03   , An2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Fs3 
	.byte	W24
@ 150   ----------------------------------------
	.byte	W23
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte	W01
@ 151   ----------------------------------------
	.byte	W24
	.byte		N04   , Bn2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N04   , Gn3 
	.byte	W23
	.byte		N03   , Gn3 , v100
	.byte	W01
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 
	.byte	W24
@ 152   ----------------------------------------
	.byte	W23
	.byte		        Bn2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Dn3 
	.byte	W01
	.byte		        Bn2 
	.byte		N03   , Gn3 
	.byte	W24
@ 153   ----------------------------------------
	.byte	W24
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 
	.byte	W24
@ 154   ----------------------------------------
	.byte	W23
	.byte		        Dn3 
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        An2 , v096
	.byte	W24
	.byte		N03   
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
@ 155   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        Fs3 , v096
	.byte	W01
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte	W24
@ 156   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v096
	.byte		N03   , Gn3 
	.byte	W01
	.byte		        En3 , v100
	.byte	W23
	.byte		        Gn3 
	.byte	W01
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte	W24
@ 157   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte	W24
@ 158   ----------------------------------------
	.byte	W23
	.byte		        Fs3 
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte	W24
	.byte		        An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W24
@ 159   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 160   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte	W01
	.byte		        Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W24
@ 161   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 162   ----------------------------------------
	.byte	W24
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W23
	.byte		        Dn3 , v096
	.byte		N03   , Gn3 
	.byte	W01
	.byte		        Bn2 
	.byte	W24
@ 163   ----------------------------------------
	.byte	W23
	.byte		        Bn2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte	W01
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 164   ----------------------------------------
	.byte	W24
	.byte		        Gs2 , v100
	.byte		N03   , Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fn3 
	.byte	W24
	.byte		        Gs2 
	.byte		N03   , Bn2 
	.byte		N03   , Dn3 
	.byte		N04   , Fn3 , v096
	.byte	W24
@ 165   ----------------------------------------
	.byte	W23
	.byte		N03   , Gs2 , v100
	.byte		N03   , Fn3 
	.byte	W01
	.byte		        Bn2 
	.byte		N03   , Dn3 , v096
	.byte	W23
	.byte		        Gs2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v096
	.byte	W01
	.byte		        Bn2 , v100
	.byte	W24
@ 166   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 
	.byte		N04   , Fs3 
	.byte	W24
	.byte		N03   , An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 167   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
@ 168   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W24
	.byte	W01
@ 169   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 170   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
@ 171   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte		N03   , Gn3 
	.byte	W24
@ 172   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte	W01
	.byte		        Gn3 , v100
	.byte	W24
@ 173   ----------------------------------------
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W23
	.byte		        Cs3 , v096
	.byte	W01
	.byte		        En3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 174   ----------------------------------------
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        Dn3 , v100
	.byte	W24
@ 175   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Fs3 , v096
	.byte	W01
	.byte		        Dn3 , v100
	.byte	W23
	.byte		        Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte	W23
	.byte		N03   
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W01
@ 176   ----------------------------------------
	.byte	W72
@ 177   ----------------------------------------
	.byte	W72
@ 178   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 179   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 180   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_2_132
@ 181   ----------------------------------------
	.byte	W23
	.byte		N03   , Fs3 , v096
	.byte	W01
	.byte		        An2 , v100
	.byte		N03   , Dn3 , v096
	.byte	W23
	.byte		N03   
	.byte		N03   , Fs3 
	.byte	W01
	.byte		        An2 , v100
	.byte	W24
@ 182   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_2_134
@ 183   ----------------------------------------
	.byte	W24
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte		N04   , Gn3 , v096
	.byte	W24
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte		N04   , Gn3 , v096
	.byte	W24
@ 184   ----------------------------------------
	.byte	W23
	.byte		N03   , Cs3 , v100
	.byte		N03   , En3 
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte		        Cs3 , v100
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 
	.byte	W24
@ 185   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v096
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 , v100
	.byte		N03   , En3 , v096
	.byte		N04   , Gn3 , v100
	.byte	W24
@ 186   ----------------------------------------
	.byte	W23
	.byte		N03   , Cs3 , v096
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 , v100
	.byte	W24
	.byte		        Cs3 , v096
	.byte		N03   , En3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 187   ----------------------------------------
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 , v100
	.byte		N04   , Gn3 
	.byte	W24
	.byte		N03   , Cs3 , v096
	.byte		N03   , En3 
	.byte		N03   , Gn3 , v100
	.byte	W24
@ 188   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte	W01
	.byte		        Gn3 
	.byte	W23
	.byte		        Cs3 , v100
	.byte		N03   , Gn3 , v096
	.byte	W01
	.byte		        En3 
	.byte	W24
@ 189   ----------------------------------------
	.byte	W24
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte		N04   , Gn3 
	.byte	W24
	.byte		N03   , Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 190   ----------------------------------------
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W24
@ 191   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_2_047
@ 192   ----------------------------------------
	.byte	W72
@ 193   ----------------------------------------
	.byte	W72
@ 194   ----------------------------------------
	.byte	W23
	.byte		N03   , An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
@ 195   ----------------------------------------
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
@ 196   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 , v100
	.byte		N04   , Fs3 
	.byte	W24
	.byte		N03   , An2 , v096
	.byte		N03   , Dn3 
	.byte		N04   , Fs3 , v100
	.byte	W24
@ 197   ----------------------------------------
	.byte	W24
	.byte		N03   , An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W23
	.byte		        Dn3 
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Fs3 
	.byte	W24
@ 198   ----------------------------------------
	.byte	W23
	.byte		        Bn2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 , v096
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
@ 199   ----------------------------------------
	.byte	W24
	.byte		N04   , Bn2 
	.byte		N03   , Dn3 
	.byte		N04   , Gn3 , v096
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        Bn2 , v100
	.byte		N03   , Dn3 
	.byte	W24
@ 200   ----------------------------------------
	.byte	W23
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Dn3 , v096
	.byte	W01
	.byte		        Bn2 
	.byte		N03   , Gn3 , v100
	.byte	W24
@ 201   ----------------------------------------
	.byte	W24
	.byte		        Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 202   ----------------------------------------
	.byte	W23
	.byte		        Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W01
	.byte		        An2 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 
	.byte	W24
@ 203   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		N03   
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 , v100
	.byte	W24
@ 204   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W01
	.byte		        En3 
	.byte	W23
	.byte		        Gn3 
	.byte	W01
	.byte		        Cs3 , v096
	.byte		N03   , En3 , v100
	.byte	W24
@ 205   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v096
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 
	.byte	W23
	.byte		        Gn3 , v100
	.byte	W01
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte	W24
@ 206   ----------------------------------------
	.byte	W23
	.byte		        Fs3 
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 207   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 
	.byte	W24
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 208   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte	W01
	.byte		        Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 209   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 
	.byte	W24
	.byte	W01
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 210   ----------------------------------------
	.byte	W24
	.byte		        Bn2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Gn3 
	.byte	W23
	.byte		        Dn3 
	.byte		N03   , Gn3 , v096
	.byte	W01
	.byte		        Bn2 , v100
	.byte	W24
@ 211   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
	.byte		        Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Gn3 
	.byte	W24
@ 212   ----------------------------------------
	.byte	W24
	.byte		        Gs2 
	.byte		N03   , Bn2 
	.byte		N03   , Dn3 
	.byte		N03   , Fn3 , v096
	.byte	W24
	.byte		        Gs2 , v100
	.byte		N03   , Bn2 , v096
	.byte		N03   , Dn3 , v100
	.byte		N04   , Fn3 , v096
	.byte	W24
@ 213   ----------------------------------------
	.byte	W23
	.byte		N03   , Gs2 , v100
	.byte		N03   , Fn3 
	.byte	W01
	.byte		        Bn2 
	.byte		N03   , Dn3 , v096
	.byte	W23
	.byte		        Gs2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fn3 , v096
	.byte	W01
	.byte		        Bn2 , v100
	.byte	W24
@ 214   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 , v096
	.byte		N04   , Dn3 , v100
	.byte		N04   , Fs3 
	.byte	W24
	.byte		N03   , An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
@ 215   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N04   , Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W23
	.byte		        Fs3 , v100
	.byte	W01
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte	W24
@ 216   ----------------------------------------
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Dn3 
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte	W01
@ 217   ----------------------------------------
	.byte	W23
	.byte		N03   
	.byte	W01
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte	W24
	.byte		N04   , An2 
	.byte		N03   , Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W24
@ 218   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte		N03   , Gn3 , v096
	.byte	W24
@ 219   ----------------------------------------
	.byte	W23
	.byte		        Cs3 , v100
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte	W01
	.byte		        Cs3 
	.byte		N03   , En3 , v096
	.byte		N03   , Gn3 , v100
	.byte	W24
@ 220   ----------------------------------------
	.byte	W23
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte		N03   , Gn3 
	.byte	W24
	.byte		        Cs3 
	.byte		N03   , En3 
	.byte	W01
	.byte		        Gn3 , v096
	.byte	W24
@ 221   ----------------------------------------
	.byte	W24
	.byte		        Cs3 , v100
	.byte		N03   , En3 , v096
	.byte		N03   , Gn3 
	.byte	W23
	.byte		        Cs3 
	.byte	W01
	.byte		        En3 , v100
	.byte		N03   , Gn3 
	.byte	W24
@ 222   ----------------------------------------
	.byte	W23
	.byte		        An2 
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 , v100
	.byte	W24
	.byte		        An2 , v096
	.byte		N03   , Fs3 , v100
	.byte	W01
	.byte		        Dn3 
	.byte	W24
@ 223   ----------------------------------------
	.byte	W23
	.byte		        An2 , v096
	.byte		N03   , Fs3 , v100
	.byte	W01
	.byte		        Dn3 , v096
	.byte	W23
	.byte		        Dn3 , v100
	.byte		N03   , Fs3 , v096
	.byte	W01
	.byte		        An2 
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Dn3 , v096
	.byte		N03   , Fs3 
	.byte	W01
@ 224   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		        An2 
	.byte		N03   , Cs3 , v100
	.byte	W01
	.byte		        En3 , v096
	.byte	W23
	.byte		        An2 , v100
	.byte		N03   , Dn3 
	.byte	W01
@ 225   ----------------------------------------
	.byte		        Fs3 , v096
	.byte	W72
@ 226   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

mus_romagna_mia_3:
	.byte	KEYSH , mus_romagna_mia_key+0
@ 000   ----------------------------------------
	.byte	W30
	.byte		VOICE , 73
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		VOL   , 127*mus_romagna_mia_mvl/mxv
	.byte	W30
	.byte	W01
	.byte	W01
	.byte	W01
	.byte	W08
@ 001   ----------------------------------------
	.byte	W72
@ 002   ----------------------------------------
	.byte	W72
@ 003   ----------------------------------------
	.byte	W72
@ 004   ----------------------------------------
	.byte	W72
@ 005   ----------------------------------------
	.byte	W72
@ 006   ----------------------------------------
	.byte	W72
@ 007   ----------------------------------------
	.byte	W72
@ 008   ----------------------------------------
	.byte	W72
@ 009   ----------------------------------------
	.byte	W72
@ 010   ----------------------------------------
	.byte	W72
@ 011   ----------------------------------------
	.byte	W72
@ 012   ----------------------------------------
	.byte	W72
@ 013   ----------------------------------------
	.byte	W72
@ 014   ----------------------------------------
	.byte	W72
@ 015   ----------------------------------------
	.byte	W72
@ 016   ----------------------------------------
	.byte	W72
@ 017   ----------------------------------------
	.byte	W72
@ 018   ----------------------------------------
	.byte	W72
@ 019   ----------------------------------------
	.byte	W72
@ 020   ----------------------------------------
	.byte	W72
@ 021   ----------------------------------------
	.byte	W72
@ 022   ----------------------------------------
	.byte	W72
@ 023   ----------------------------------------
	.byte	W72
@ 024   ----------------------------------------
	.byte	W72
@ 025   ----------------------------------------
	.byte	W72
@ 026   ----------------------------------------
	.byte	W72
@ 027   ----------------------------------------
	.byte	W72
@ 028   ----------------------------------------
	.byte	W72
@ 029   ----------------------------------------
	.byte	W72
@ 030   ----------------------------------------
	.byte	W72
@ 031   ----------------------------------------
	.byte	W72
@ 032   ----------------------------------------
	.byte	W72
@ 033   ----------------------------------------
	.byte	W72
@ 034   ----------------------------------------
	.byte	W72
@ 035   ----------------------------------------
	.byte	W72
@ 036   ----------------------------------------
	.byte	W72
@ 037   ----------------------------------------
	.byte	W72
@ 038   ----------------------------------------
	.byte	W72
@ 039   ----------------------------------------
	.byte	W72
@ 040   ----------------------------------------
	.byte	W72
@ 041   ----------------------------------------
	.byte	W72
@ 042   ----------------------------------------
	.byte	W72
@ 043   ----------------------------------------
	.byte	W72
@ 044   ----------------------------------------
	.byte	W72
@ 045   ----------------------------------------
	.byte	W72
@ 046   ----------------------------------------
	.byte	W72
@ 047   ----------------------------------------
	.byte	W72
@ 048   ----------------------------------------
	.byte	W72
@ 049   ----------------------------------------
	.byte	W72
@ 050   ----------------------------------------
	.byte	W72
@ 051   ----------------------------------------
	.byte	W72
@ 052   ----------------------------------------
	.byte	W72
@ 053   ----------------------------------------
	.byte	W72
@ 054   ----------------------------------------
	.byte	W72
@ 055   ----------------------------------------
	.byte	W72
@ 056   ----------------------------------------
	.byte	W72
@ 057   ----------------------------------------
	.byte	W72
@ 058   ----------------------------------------
	.byte	W72
@ 059   ----------------------------------------
	.byte	W72
@ 060   ----------------------------------------
	.byte	W72
@ 061   ----------------------------------------
	.byte	W72
@ 062   ----------------------------------------
	.byte	W72
@ 063   ----------------------------------------
	.byte	W72
@ 064   ----------------------------------------
	.byte	W72
@ 065   ----------------------------------------
	.byte	W72
@ 066   ----------------------------------------
	.byte	W72
@ 067   ----------------------------------------
	.byte	W72
@ 068   ----------------------------------------
	.byte	W72
@ 069   ----------------------------------------
	.byte	W72
@ 070   ----------------------------------------
	.byte	W72
@ 071   ----------------------------------------
	.byte	W72
@ 072   ----------------------------------------
	.byte	W72
@ 073   ----------------------------------------
	.byte	W72
@ 074   ----------------------------------------
	.byte	W72
@ 075   ----------------------------------------
	.byte	W72
@ 076   ----------------------------------------
	.byte	W72
@ 077   ----------------------------------------
	.byte	W72
@ 078   ----------------------------------------
	.byte	W72
@ 079   ----------------------------------------
	.byte	W72
@ 080   ----------------------------------------
	.byte	W72
@ 081   ----------------------------------------
	.byte	W72
@ 082   ----------------------------------------
	.byte	W72
@ 083   ----------------------------------------
	.byte	W72
@ 084   ----------------------------------------
	.byte	W72
@ 085   ----------------------------------------
	.byte	W72
@ 086   ----------------------------------------
	.byte	W72
@ 087   ----------------------------------------
	.byte	W72
@ 088   ----------------------------------------
	.byte	W72
@ 089   ----------------------------------------
	.byte	W72
@ 090   ----------------------------------------
	.byte	W72
@ 091   ----------------------------------------
	.byte	W72
@ 092   ----------------------------------------
	.byte	W72
@ 093   ----------------------------------------
	.byte	W72
@ 094   ----------------------------------------
	.byte	W72
@ 095   ----------------------------------------
	.byte	W72
@ 096   ----------------------------------------
	.byte	W72
@ 097   ----------------------------------------
	.byte	W64
	.byte		BEND  , c_v-1
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-13
	.byte	W01
	.byte		        c_v-20
	.byte	W01
	.byte		        c_v-25
	.byte		        c_v-30
	.byte	W01
	.byte		        c_v-33
	.byte		        c_v-35
	.byte	W01
	.byte		        c_v-36
	.byte	W01
	.byte		        c_v-36
	.byte	W01
	.byte		        c_v-36
	.byte		        c_v-35
	.byte		N32   , An3 , v112, gtp2
	.byte	W01
@ 098   ----------------------------------------
	.byte		BEND  , c_v-34
	.byte		        c_v-33
	.byte	W01
	.byte		        c_v-32
	.byte	W01
	.byte		        c_v-32
	.byte		        c_v-31
	.byte	W03
	.byte		        c_v-32
	.byte		        c_v-31
	.byte	W01
	.byte		        c_v-31
	.byte	W01
	.byte		        c_v-30
	.byte	W01
	.byte		        c_v-29
	.byte		        c_v-28
	.byte	W01
	.byte		        c_v-27
	.byte	W01
	.byte		        c_v-26
	.byte		        c_v-25
	.byte	W01
	.byte		        c_v-23
	.byte		        c_v-22
	.byte	W01
	.byte		        c_v-21
	.byte		        c_v-20
	.byte	W01
	.byte		        c_v-19
	.byte		        c_v-19
	.byte	W01
	.byte		        c_v-18
	.byte	W01
	.byte		        c_v-17
	.byte		        c_v-16
	.byte	W01
	.byte		        c_v-16
	.byte		        c_v-15
	.byte	W01
	.byte		        c_v-14
	.byte	W01
	.byte		        c_v-14
	.byte		        c_v-12
	.byte	W01
	.byte		        c_v-11
	.byte		        c_v-10
	.byte	W01
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-2
	.byte	W02
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v+0
	.byte	W10
	.byte		N10   
	.byte	W11
	.byte		N23   , An3 , v108
	.byte	W23
	.byte		N44   , As3 
	.byte	W01
@ 099   ----------------------------------------
	.byte	W44
	.byte	W02
	.byte		N24   , An3 , v112
	.byte	W24
	.byte	W02
@ 100   ----------------------------------------
	.byte		N44   , Dn4 , v108, gtp3
	.byte	W20
	.byte		MOD   , 1
	.byte		        2
	.byte	W01
	.byte		        3
	.byte	W01
	.byte		        4
	.byte		        6
	.byte	W01
	.byte		        7
	.byte		        9
	.byte	W01
	.byte		        12
	.byte	W01
	.byte		        14
	.byte		        17
	.byte	W01
	.byte		        20
	.byte	W01
	.byte		        23
	.byte		        26
	.byte	W01
	.byte		        29
	.byte		        32
	.byte	W01
	.byte		        36
	.byte		        39
	.byte	W01
	.byte		        42
	.byte	W01
	.byte		        45
	.byte		        48
	.byte	W01
	.byte		        51
	.byte		        54
	.byte	W01
	.byte		        56
	.byte	W01
	.byte		        58
	.byte		        60
	.byte	W01
	.byte		        61
	.byte	W01
	.byte		        62
	.byte		        63
	.byte	W01
	.byte		        64
	.byte	W01
	.byte		        65
	.byte	W03
	.byte		        63
	.byte	W01
	.byte		        62
	.byte		        59
	.byte	W01
	.byte		        55
	.byte	W01
	.byte		        50
	.byte		        43
	.byte	W01
	.byte		        35
	.byte	W01
	.byte		        26
	.byte		        18
	.byte	W01
	.byte		        11
	.byte		        6
	.byte		N24   , An3 , v116, gtp1
	.byte	W01
	.byte		MOD   , 2
	.byte		        0
	.byte	W24
@ 101   ----------------------------------------
	.byte		N44   , Fn3 , v112
	.byte	W44
	.byte	W03
	.byte		N23   , Dn3 
	.byte	W24
	.byte		N32   , Fn3 , v104, gtp3
	.byte	W01
@ 102   ----------------------------------------
	.byte	W36
	.byte		TIE   , En3 , v100
	.byte	W36
@ 103   ----------------------------------------
	.byte	W10
	.byte		MOD   , 1
	.byte	W02
	.byte		        2
	.byte	W01
	.byte		        3
	.byte	W01
	.byte		        4
	.byte		        5
	.byte	W01
	.byte		        6
	.byte	W01
	.byte		        7
	.byte	W01
	.byte		        8
	.byte	W01
	.byte		        9
	.byte	W01
	.byte		        10
	.byte	W01
	.byte		        11
	.byte	W01
	.byte		        12
	.byte	W02
	.byte		        13
	.byte	W01
	.byte		        14
	.byte		        15
	.byte	W02
	.byte		        16
	.byte		        17
	.byte	W01
	.byte		        18
	.byte	W01
	.byte		        19
	.byte	W01
	.byte		        20
	.byte		        21
	.byte	W01
	.byte		        22
	.byte		        23
	.byte	W01
	.byte		        24
	.byte	W02
	.byte		        25
	.byte		        26
	.byte	W02
	.byte		        27
	.byte		        28
	.byte	W01
	.byte		        29
	.byte	W01
	.byte		        30
	.byte		        31
	.byte	W01
	.byte		        32
	.byte	W01
	.byte		        33
	.byte	W01
	.byte		        34
	.byte	W01
	.byte		        35
	.byte	W01
	.byte		        36
	.byte		        37
	.byte	W01
	.byte		        38
	.byte		        39
	.byte	W02
	.byte		        40
	.byte		        41
	.byte	W02
	.byte		        42
	.byte	W01
	.byte		        43
	.byte	W02
	.byte		        44
	.byte	W06
	.byte		        43
	.byte	W01
	.byte		        42
	.byte	W01
	.byte		        40
	.byte		        39
	.byte	W01
	.byte		        38
	.byte		        37
	.byte	W01
	.byte		        36
	.byte	W01
	.byte		        35
	.byte		        34
	.byte	W01
	.byte		        33
	.byte	W01
	.byte		        32
	.byte	W01
	.byte		        31
	.byte	W01
	.byte		        30
	.byte		        29
	.byte	W01
	.byte		        28
	.byte		        27
	.byte	W01
	.byte		        26
	.byte	W01
	.byte		        24
	.byte		        22
	.byte	W01
	.byte		EOT   
	.byte		MOD   , 20
	.byte		        18
	.byte	W01
	.byte		        15
	.byte		        12
	.byte	W01
	.byte		        9
	.byte	W01
@ 104   ----------------------------------------
	.byte		        7
	.byte		        5
	.byte	W01
	.byte		        3
	.byte		        2
	.byte	W01
	.byte		        1
	.byte	W01
	.byte		        0
	.byte	W68
	.byte	W01
@ 105   ----------------------------------------
	.byte	W54
	.byte	W01
	.byte		BEND  , c_v-1
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-9
	.byte	W01
	.byte		        c_v-16
	.byte		        c_v-24
	.byte	W01
	.byte		        c_v-31
	.byte	W01
	.byte		        c_v-36
	.byte		        c_v-40
	.byte	W01
	.byte		        c_v-43
	.byte		N44   , Gn3 , v127, gtp2
	.byte	W01
	.byte		BEND  , c_v-44
	.byte	W01
	.byte		        c_v-43
	.byte		        c_v-43
	.byte	W01
	.byte		        c_v-42
	.byte	W01
	.byte		        c_v-41
	.byte		        c_v-41
	.byte	W01
	.byte		        c_v-40
	.byte		        c_v-40
	.byte	W01
	.byte		        c_v-40
	.byte	W01
	.byte		        c_v-39
	.byte	W01
	.byte		        c_v-39
	.byte		        c_v-38
	.byte	W01
	.byte		        c_v-36
	.byte		        c_v-35
	.byte	W01
	.byte		        c_v-33
	.byte	W01
	.byte		        c_v-32
	.byte		        c_v-30
	.byte	W01
@ 106   ----------------------------------------
	.byte		        c_v-28
	.byte		        c_v-27
	.byte	W01
	.byte		        c_v-25
	.byte	W01
	.byte		        c_v-25
	.byte		        c_v-23
	.byte	W01
	.byte		        c_v-22
	.byte		        c_v-21
	.byte	W01
	.byte		        c_v-20
	.byte		        c_v-19
	.byte	W01
	.byte		        c_v-18
	.byte	W01
	.byte		        c_v-17
	.byte		        c_v-16
	.byte	W01
	.byte		        c_v-14
	.byte		        c_v-13
	.byte	W01
	.byte		        c_v-12
	.byte	W01
	.byte		        c_v-11
	.byte		        c_v-10
	.byte	W01
	.byte		        c_v-9
	.byte	W01
	.byte		        c_v-8
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-5
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte		        c_v+0
	.byte	W22
	.byte		N17   , Gn3 , v124
	.byte	W19
	.byte		N24   , Gn3 , v108
	.byte	W14
@ 107   ----------------------------------------
	.byte	W06
	.byte		N28   , An3 , v120
	.byte	W24
	.byte	W02
	.byte		N24   , As3 , v120, gtp1
	.byte	W23
	.byte		N68   , An3 , v127
	.byte	W17
@ 108   ----------------------------------------
	.byte	W48
	.byte	W02
	.byte		N32   , En3 , v120, gtp3
	.byte	W22
@ 109   ----------------------------------------
	.byte	W10
	.byte		N12   , Fn3 , v108
	.byte	W03
	.byte		N11   , Fs3 , v112
	.byte	W08
	.byte		N32   , Gn3 , v116
	.byte	W28
	.byte		N23   , Fn3 , v120
	.byte	W22
	.byte		N11   , En3 , v104
	.byte	W01
@ 110   ----------------------------------------
	.byte	W09
	.byte		N10   , Fn3 , v112
	.byte	W07
	.byte		N09   , En3 , v100
	.byte	W07
	.byte		TIE   , Dn3 , v104
	.byte	W48
	.byte	W01
@ 111   ----------------------------------------
	.byte	W24
	.byte	W01
	.byte		MOD   , 1
	.byte	W01
	.byte		        2
	.byte	W01
	.byte		        3
	.byte	W01
	.byte		        4
	.byte	W02
	.byte		        5
	.byte		        6
	.byte	W01
	.byte		        7
	.byte	W01
	.byte		        8
	.byte	W01
	.byte		        9
	.byte		        10
	.byte	W01
	.byte		        11
	.byte	W01
	.byte		        12
	.byte	W01
	.byte		        13
	.byte		        15
	.byte	W01
	.byte		        16
	.byte		        17
	.byte	W01
	.byte		        18
	.byte	W01
	.byte		        19
	.byte	W01
	.byte		        20
	.byte		        21
	.byte	W01
	.byte		        22
	.byte		        23
	.byte	W01
	.byte		        24
	.byte	W01
	.byte		        25
	.byte		        26
	.byte	W01
	.byte		        27
	.byte	W01
	.byte		        28
	.byte		        29
	.byte	W01
	.byte		        30
	.byte	W01
	.byte		        31
	.byte	W01
	.byte		        32
	.byte		        33
	.byte	W02
	.byte		        34
	.byte	W01
	.byte		        35
	.byte	W01
	.byte		EOT   
	.byte	W01
	.byte		MOD   , 36
	.byte	W01
	.byte		        37
	.byte	W01
	.byte		        38
	.byte	W02
	.byte		        39
	.byte	W02
	.byte		        40
	.byte	W02
	.byte		        39
	.byte	W01
	.byte		        38
	.byte	W01
	.byte		        37
	.byte		        36
	.byte	W01
	.byte		        34
	.byte		        33
	.byte	W01
	.byte		        31
	.byte	W01
	.byte		        29
	.byte		        28
	.byte	W01
	.byte		        26
	.byte		        25
	.byte	W01
	.byte		        24
	.byte		        23
	.byte	W01
	.byte		        22
	.byte	W01
	.byte		        21
	.byte		        19
	.byte	W01
	.byte		        17
	.byte		        14
	.byte	W01
@ 112   ----------------------------------------
	.byte		        12
	.byte	W01
	.byte		        9
	.byte		        6
	.byte	W01
	.byte		        4
	.byte		        2
	.byte	W01
	.byte		        1
	.byte	W01
	.byte		        0
	.byte	W68
@ 113   ----------------------------------------
	.byte	W56
	.byte	W01
	.byte		BEND  , c_v-1
	.byte	W01
	.byte		        c_v-4
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-14
	.byte	W01
	.byte		        c_v-20
	.byte		        c_v-25
	.byte	W01
	.byte		        c_v-30
	.byte		        c_v-34
	.byte	W01
	.byte		        c_v-37
	.byte	W01
	.byte		        c_v-39
	.byte		        c_v-40
	.byte	W01
	.byte		        c_v-39
	.byte	W01
	.byte		        c_v-38
	.byte		        c_v-36
	.byte	W01
	.byte		        c_v-35
	.byte	W01
	.byte		        c_v-33
	.byte		        c_v-32
	.byte	W01
	.byte		        c_v-31
	.byte		        c_v-30
	.byte	W01
	.byte		        c_v-29
	.byte	W01
	.byte		        c_v-29
	.byte		        c_v-28
	.byte	W01
	.byte		        c_v-28
	.byte		        c_v-27
	.byte		N36   , An3 , v100
	.byte	W01
@ 114   ----------------------------------------
	.byte		BEND  , c_v-27
	.byte	W01
	.byte		        c_v-26
	.byte		        c_v-26
	.byte	W01
	.byte		        c_v-25
	.byte		        c_v-24
	.byte	W01
	.byte		        c_v-23
	.byte		        c_v-22
	.byte	W01
	.byte		        c_v-21
	.byte	W01
	.byte		        c_v-20
	.byte		        c_v-19
	.byte	W01
	.byte		        c_v-18
	.byte	W01
	.byte		        c_v-17
	.byte		        c_v-16
	.byte	W01
	.byte		        c_v-15
	.byte		        c_v-14
	.byte	W01
	.byte		        c_v-13
	.byte	W01
	.byte		        c_v-12
	.byte		        c_v-11
	.byte	W01
	.byte		        c_v-11
	.byte		        c_v-10
	.byte	W01
	.byte		        c_v-9
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-6
	.byte		        c_v-5
	.byte	W01
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v+0
	.byte	W16
	.byte		N06   , An3 , v112
	.byte	W11
	.byte		N24   , An3 , v108, gtp1
	.byte	W23
	.byte		N44   , As3 , v112, gtp3
	.byte	W02
@ 115   ----------------------------------------
	.byte	W44
	.byte		N28   , An3 , v112, gtp1
	.byte	W24
	.byte	W03
	.byte		N68   , Dn4 , v116
	.byte	W01
@ 116   ----------------------------------------
	.byte	W22
	.byte		MOD   , 1
	.byte		        2
	.byte	W01
	.byte		        3
	.byte	W01
	.byte		        4
	.byte		        5
	.byte	W01
	.byte		        7
	.byte		        8
	.byte	W01
	.byte		        10
	.byte		        13
	.byte	W01
	.byte		        15
	.byte	W01
	.byte		        17
	.byte		        20
	.byte	W01
	.byte		        22
	.byte	W01
	.byte		        25
	.byte		        27
	.byte	W01
	.byte		        30
	.byte		        32
	.byte	W01
	.byte		        35
	.byte	W01
	.byte		        37
	.byte		        40
	.byte	W01
	.byte		        43
	.byte		        46
	.byte	W01
	.byte		        49
	.byte	W01
	.byte		        51
	.byte		        53
	.byte	W01
	.byte		        56
	.byte		        58
	.byte	W01
	.byte		        59
	.byte		        61
	.byte	W01
	.byte		        63
	.byte	W01
	.byte		        64
	.byte		        66
	.byte	W01
	.byte		        67
	.byte		        68
	.byte	W01
	.byte		        69
	.byte	W01
	.byte		        70
	.byte		        71
	.byte	W02
	.byte		        72
	.byte	W01
	.byte		        73
	.byte		        74
	.byte	W01
	.byte		        75
	.byte	W01
	.byte		        76
	.byte	W01
	.byte		        77
	.byte	W01
	.byte		        78
	.byte	W02
	.byte		        77
	.byte		        76
	.byte	W01
	.byte		        75
	.byte		        74
	.byte	W01
	.byte		        72
	.byte		        70
	.byte	W01
	.byte		        67
	.byte	W01
	.byte		        64
	.byte		        60
	.byte	W01
	.byte		        54
	.byte		        48
	.byte	W01
	.byte		        41
	.byte	W01
	.byte		        32
	.byte		        24
	.byte	W01
	.byte		        16
	.byte		        9
	.byte	W01
	.byte		        4
	.byte	W01
	.byte		        1
	.byte		        0
	.byte	W06
	.byte		N24   , Ds4 , v108, gtp3
	.byte	W04
@ 117   ----------------------------------------
	.byte	W21
	.byte		        Dn4 , v108, gtp3
	.byte	W24
	.byte	W01
	.byte		        Cn4 , v112, gtp2
	.byte	W24
	.byte	W01
	.byte		N32   , As3 , v104, gtp3
	.byte	W01
@ 118   ----------------------------------------
	.byte	W36
	.byte		N05   , Cn4 , v108
	.byte	W06
	.byte		N09   , As3 
	.byte	W06
	.byte		N88   , Gn3 , v100
	.byte	W24
@ 119   ----------------------------------------
	.byte	W22
	.byte		MOD   , 1
	.byte		        2
	.byte	W01
	.byte		        3
	.byte	W01
	.byte		        4
	.byte	W01
	.byte		        5
	.byte		        7
	.byte	W01
	.byte		        8
	.byte	W01
	.byte		        10
	.byte		        12
	.byte	W01
	.byte		        14
	.byte		        16
	.byte	W01
	.byte		        18
	.byte		        20
	.byte	W01
	.byte		        22
	.byte	W01
	.byte		        24
	.byte		        26
	.byte	W01
	.byte		        28
	.byte		        30
	.byte	W01
	.byte		        32
	.byte		        33
	.byte	W01
	.byte		        35
	.byte	W01
	.byte		        37
	.byte		        39
	.byte	W01
	.byte		        41
	.byte		        42
	.byte	W01
	.byte		        43
	.byte	W01
	.byte		        44
	.byte		        45
	.byte	W01
	.byte		        46
	.byte	W01
	.byte		        47
	.byte	W01
	.byte		        48
	.byte	W01
	.byte		        49
	.byte	W01
	.byte		        50
	.byte	W01
	.byte		        51
	.byte	W01
	.byte		        52
	.byte	W01
	.byte		        53
	.byte	W01
	.byte		        54
	.byte	W01
	.byte		        55
	.byte	W01
	.byte		        56
	.byte	W03
	.byte		        54
	.byte		        51
	.byte	W01
	.byte		        46
	.byte	W01
	.byte		        39
	.byte		        30
	.byte	W01
	.byte		        20
	.byte		        11
	.byte	W01
	.byte		        5
	.byte	W01
	.byte		        1
	.byte		        0
	.byte	W09
	.byte		BEND  , c_v-1
	.byte	W01
	.byte		        c_v-5
	.byte		        c_v-12
	.byte	W01
	.byte		        c_v-19
	.byte	W01
	.byte		        c_v-27
	.byte		        c_v-32
	.byte	W01
	.byte		        c_v-36
	.byte		        c_v-37
	.byte	W01
	.byte		        c_v-37
	.byte		        c_v-37
	.byte		N40   , Gn3 , v112, gtp1
	.byte	W01
@ 120   ----------------------------------------
	.byte		BEND  , c_v-35
	.byte	W01
	.byte		        c_v-33
	.byte		        c_v-31
	.byte	W01
	.byte		        c_v-29
	.byte		        c_v-27
	.byte	W01
	.byte		        c_v-26
	.byte	W01
	.byte		        c_v-26
	.byte		        c_v-25
	.byte	W01
	.byte		        c_v-24
	.byte		        c_v-23
	.byte	W01
	.byte		        c_v-22
	.byte	W01
	.byte		        c_v-20
	.byte		        c_v-19
	.byte	W01
	.byte		        c_v-18
	.byte		        c_v-17
	.byte	W01
	.byte		        c_v-16
	.byte		        c_v-15
	.byte	W01
	.byte		        c_v-14
	.byte	W01
	.byte		        c_v-13
	.byte		        c_v-12
	.byte	W01
	.byte		        c_v-11
	.byte		        c_v-10
	.byte	W01
	.byte		        c_v-9
	.byte	W01
	.byte		        c_v-8
	.byte		        c_v-8
	.byte	W01
	.byte		        c_v-7
	.byte		        c_v-6
	.byte	W01
	.byte		        c_v-6
	.byte		        c_v-5
	.byte	W01
	.byte		        c_v-4
	.byte	W01
	.byte		        c_v-3
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-2
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v-1
	.byte	W01
	.byte		        c_v-1
	.byte		        c_v+0
	.byte	W16
	.byte		N10   , An3 
	.byte	W10
	.byte		N23   , As3 
	.byte	W24
	.byte		N07   , Gn3 , v104
	.byte	W01
@ 121   ----------------------------------------
	.byte	W05
	.byte		N10   , An3 , v112
	.byte	W06
	.byte		N13   , Gn3 , v100
	.byte	W12
	.byte		N28   , Fn3 , v112
	.byte	W24
	.byte		N24   , En3 , v116
	.byte	W24
	.byte	W01
@ 122   ----------------------------------------
	.byte		N32   , Fn3 , v104, gtp1
	.byte	W32
	.byte	W03
	.byte		N11   , Gn3 , v108
	.byte	W13
	.byte		N21   , An3 
	.byte	W23
	.byte		N05   , Fn3 
	.byte	W01
@ 123   ----------------------------------------
	.byte	W05
	.byte		        Gn3 
	.byte	W06
	.byte		N11   , Fn3 , v116
	.byte	W12
	.byte		N23   , En3 , v100
	.byte	W24
	.byte		N18   , Dn3 , v104
	.byte	W24
	.byte		N09   , En3 , v108
	.byte	W01
@ 124   ----------------------------------------
	.byte	W23
	.byte		N05   , As3 , v112
	.byte	W06
	.byte		N09   , Cn4 , v104
	.byte	W06
	.byte		N11   , As3 
	.byte	W12
	.byte		N23   , An3 , v108
	.byte	W24
	.byte	W01
@ 125   ----------------------------------------
	.byte		N06   , Gn3 , v112
	.byte	W07
	.byte		        An3 , v108
	.byte	W08
	.byte		        Gn3 
	.byte	W08
	.byte		        Fn3 , v104
	.byte	W09
	.byte		        Gn3 
	.byte	W08
	.byte		        Fn3 , v116
	.byte	W07
	.byte		N24   , En3 , v104, gtp2
	.byte	W24
	.byte		TIE   , Dn3 , v112
	.byte	W01
@ 126   ----------------------------------------
	.byte	W48
	.byte	W03
	.byte		MOD   , 1
	.byte	W02
	.byte		        2
	.byte	W01
	.byte		        3
	.byte	W01
	.byte		        4
	.byte		        5
	.byte	W02
	.byte		        6
	.byte	W01
	.byte		        7
	.byte		        8
	.byte	W01
	.byte		        9
	.byte	W01
	.byte		        10
	.byte		        11
	.byte	W01
	.byte		        12
	.byte	W01
	.byte		        13
	.byte	W01
	.byte		        14
	.byte		        15
	.byte	W01
	.byte		        16
	.byte	W01
	.byte		        17
	.byte		        18
	.byte	W02
	.byte		        19
	.byte		        20
	.byte	W01
	.byte		        21
	.byte		        22
	.byte	W01
	.byte		        23
	.byte	W01
	.byte		        24
	.byte	W01
	.byte		        25
	.byte		        26
	.byte	W01
@ 127   ----------------------------------------
	.byte	W01
	.byte		        27
	.byte		        28
	.byte	W01
	.byte		        29
	.byte		        30
	.byte	W02
	.byte		        31
	.byte	W01
	.byte		        32
	.byte	W01
	.byte		        34
	.byte	W02
	.byte		        35
	.byte	W01
	.byte		        36
	.byte	W02
	.byte		        37
	.byte	W01
	.byte		        38
	.byte	W02
	.byte		        39
	.byte	W01
	.byte		        40
	.byte	W01
	.byte		        41
	.byte	W02
	.byte		        42
	.byte	W01
	.byte		        43
	.byte		        44
	.byte	W03
	.byte		        45
	.byte	W01
	.byte		        46
	.byte	W01
	.byte		        47
	.byte	W02
	.byte		        48
	.byte	W03
	.byte		        49
	.byte	W13
	.byte		        50
	.byte	W02
	.byte		        51
	.byte	W01
	.byte		        52
	.byte	W04
	.byte		        53
	.byte	W15
	.byte		        54
	.byte	W02
	.byte		        55
	.byte	W02
	.byte		        56
	.byte		        55
	.byte	W01
	.byte		        52
	.byte		        43
	.byte	W01
	.byte		        30
	.byte	W01
	.byte		        17
	.byte		        7
	.byte	W01
@ 128   ----------------------------------------
	.byte		        1
	.byte		        0
	.byte	W07
	.byte		EOT   
	.byte	W64
	.byte	W01
@ 129   ----------------------------------------
	.byte	W72
@ 130   ----------------------------------------
	.byte	W72
@ 131   ----------------------------------------
	.byte	W72
@ 132   ----------------------------------------
	.byte	W72
@ 133   ----------------------------------------
	.byte	W72
@ 134   ----------------------------------------
	.byte	W72
@ 135   ----------------------------------------
	.byte	W72
@ 136   ----------------------------------------
	.byte	W72
@ 137   ----------------------------------------
	.byte	W72
@ 138   ----------------------------------------
	.byte	W72
@ 139   ----------------------------------------
	.byte	W72
@ 140   ----------------------------------------
	.byte	W72
@ 141   ----------------------------------------
	.byte	W72
@ 142   ----------------------------------------
	.byte	W72
@ 143   ----------------------------------------
	.byte	W72
@ 144   ----------------------------------------
	.byte	W72
@ 145   ----------------------------------------
	.byte	W72
@ 146   ----------------------------------------
	.byte	W72
@ 147   ----------------------------------------
	.byte	W72
@ 148   ----------------------------------------
	.byte	W72
@ 149   ----------------------------------------
	.byte	W72
@ 150   ----------------------------------------
	.byte	W72
@ 151   ----------------------------------------
	.byte	W72
@ 152   ----------------------------------------
	.byte	W72
@ 153   ----------------------------------------
	.byte	W72
@ 154   ----------------------------------------
	.byte	W72
@ 155   ----------------------------------------
	.byte	W72
@ 156   ----------------------------------------
	.byte	W72
@ 157   ----------------------------------------
	.byte	W72
@ 158   ----------------------------------------
	.byte	W72
@ 159   ----------------------------------------
	.byte	W72
@ 160   ----------------------------------------
	.byte	W72
@ 161   ----------------------------------------
	.byte	W72
@ 162   ----------------------------------------
	.byte	W72
@ 163   ----------------------------------------
	.byte	W72
@ 164   ----------------------------------------
	.byte	W72
@ 165   ----------------------------------------
	.byte	W72
@ 166   ----------------------------------------
	.byte	W72
@ 167   ----------------------------------------
	.byte	W72
@ 168   ----------------------------------------
	.byte	W72
@ 169   ----------------------------------------
	.byte	W72
@ 170   ----------------------------------------
	.byte	W72
@ 171   ----------------------------------------
	.byte	W72
@ 172   ----------------------------------------
	.byte	W72
@ 173   ----------------------------------------
	.byte	W72
@ 174   ----------------------------------------
	.byte	W72
@ 175   ----------------------------------------
	.byte	W72
@ 176   ----------------------------------------
	.byte	W72
@ 177   ----------------------------------------
	.byte	W72
@ 178   ----------------------------------------
	.byte	W72
@ 179   ----------------------------------------
	.byte	W72
@ 180   ----------------------------------------
	.byte	W72
@ 181   ----------------------------------------
	.byte	W72
@ 182   ----------------------------------------
	.byte	W72
@ 183   ----------------------------------------
	.byte	W72
@ 184   ----------------------------------------
	.byte	W72
@ 185   ----------------------------------------
	.byte	W72
@ 186   ----------------------------------------
	.byte	W72
@ 187   ----------------------------------------
	.byte	W72
@ 188   ----------------------------------------
	.byte	W72
@ 189   ----------------------------------------
	.byte	W72
@ 190   ----------------------------------------
	.byte	W72
@ 191   ----------------------------------------
	.byte	W72
@ 192   ----------------------------------------
	.byte	W72
@ 193   ----------------------------------------
	.byte	W72
@ 194   ----------------------------------------
	.byte	W72
@ 195   ----------------------------------------
	.byte	W72
@ 196   ----------------------------------------
	.byte	W72
@ 197   ----------------------------------------
	.byte	W72
@ 198   ----------------------------------------
	.byte	W72
@ 199   ----------------------------------------
	.byte	W72
@ 200   ----------------------------------------
	.byte	W72
@ 201   ----------------------------------------
	.byte	W72
@ 202   ----------------------------------------
	.byte	W72
@ 203   ----------------------------------------
	.byte	W72
@ 204   ----------------------------------------
	.byte	W72
@ 205   ----------------------------------------
	.byte	W72
@ 206   ----------------------------------------
	.byte	W72
@ 207   ----------------------------------------
	.byte	W72
@ 208   ----------------------------------------
	.byte	W72
@ 209   ----------------------------------------
	.byte	W72
@ 210   ----------------------------------------
	.byte	W72
@ 211   ----------------------------------------
	.byte	W72
@ 212   ----------------------------------------
	.byte	W72
@ 213   ----------------------------------------
	.byte	W72
@ 214   ----------------------------------------
	.byte	W72
@ 215   ----------------------------------------
	.byte	W72
@ 216   ----------------------------------------
	.byte	W72
@ 217   ----------------------------------------
	.byte	W72
@ 218   ----------------------------------------
	.byte	W72
@ 219   ----------------------------------------
	.byte	W72
@ 220   ----------------------------------------
	.byte	W72
@ 221   ----------------------------------------
	.byte	W72
@ 222   ----------------------------------------
	.byte	W72
@ 223   ----------------------------------------
	.byte	W72
@ 224   ----------------------------------------
	.byte	W72
@ 225   ----------------------------------------
	.byte	W72
@ 226   ----------------------------------------
	.byte	W24
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_romagna_mia_4:
	.byte	KEYSH , mus_romagna_mia_key+0
@ 000   ----------------------------------------
	.byte	W40
	.byte		VOICE , 73
	.byte	W01
	.byte		VOL   , 127*mus_romagna_mia_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W30
	.byte	W01
@ 001   ----------------------------------------
	.byte	W09
	.byte	W01
	.byte	W01
	.byte	W60
	.byte	W01
@ 002   ----------------------------------------
	.byte		N10   , Bn3 , v112
	.byte	W10
	.byte		N12   , Gn3 , v076
	.byte	W14
	.byte		N06   , Dn3 , v092
	.byte	W12
	.byte		N10   , Bn3 , v120
	.byte	W12
	.byte		N08   , Gn3 , v088
	.byte	W11
	.byte		N02   , Dn3 , v064
	.byte	W12
	.byte		N09   , Bn3 , v120
	.byte	W01
@ 003   ----------------------------------------
	.byte	W11
	.byte		        Gn3 , v108
	.byte	W12
	.byte		N07   , Dn3 , v076
	.byte	W12
	.byte		N09   , Bn3 , v120
	.byte	W11
	.byte		N10   , Gn3 , v104
	.byte	W13
	.byte		N05   , Dn3 , v088
	.byte	W12
	.byte		N10   , Bn3 , v120
	.byte	W01
@ 004   ----------------------------------------
	.byte	W11
	.byte		N08   , Gn3 , v100
	.byte	W12
	.byte		N04   , Dn3 
	.byte	W12
	.byte		N11   , Bn3 , v112
	.byte	W12
	.byte		N06   , Gn3 , v108
	.byte	W11
	.byte		N02   , Dn3 , v088
	.byte	W12
	.byte		N10   , Bn3 , v104
	.byte	W02
@ 005   ----------------------------------------
	.byte	W10
	.byte		N09   , Gn3 , v100
	.byte	W13
	.byte		N07   , Dn3 , v096
	.byte	W12
	.byte		N12   , Bn3 , v100
	.byte	W12
	.byte		N11   , Gn3 
	.byte	W12
	.byte		N12   , Dn3 , v060
	.byte	W13
@ 006   ----------------------------------------
	.byte		N11   , Bn3 , v112
	.byte	W11
	.byte		N09   , Gn3 , v104
	.byte	W12
	.byte		N11   , Dn3 , v088
	.byte	W12
	.byte		N14   , An3 , v116
	.byte	W12
	.byte		N08   , Fs3 , v088
	.byte	W12
	.byte		N09   , Dn3 
	.byte	W12
	.byte		N10   , An3 , v120
	.byte	W01
@ 007   ----------------------------------------
	.byte	W11
	.byte		N07   , Fs3 , v096
	.byte	W12
	.byte		N05   , Dn3 , v088
	.byte	W12
	.byte		N13   , An3 , v120
	.byte	W12
	.byte		N08   , Fs3 , v088
	.byte	W11
	.byte		N06   , Dn3 , v084
	.byte	W13
	.byte		N13   , An3 , v120
	.byte	W01
@ 008   ----------------------------------------
	.byte	W11
	.byte		N09   , Fs3 , v092
	.byte	W12
	.byte		N07   , Dn3 , v088
	.byte	W12
	.byte		N12   , An3 , v120
	.byte	W12
	.byte		N10   , Fs3 , v096
	.byte	W13
	.byte		N07   , Dn3 , v080
	.byte	W12
@ 009   ----------------------------------------
	.byte		N13   , An3 , v120
	.byte	W11
	.byte		N10   , Fs3 , v092
	.byte	W12
	.byte		N09   , Dn3 , v088
	.byte	W13
	.byte		N12   , An3 , v120
	.byte	W12
	.byte		N13   , Fs3 , v092
	.byte	W12
	.byte		N08   , Dn3 
	.byte	W12
@ 010   ----------------------------------------
	.byte		N11   , An3 , v116
	.byte	W12
	.byte		N10   , Gn3 , v104
	.byte	W11
	.byte		N08   , En3 , v076
	.byte	W13
	.byte		N12   , An3 , v120
	.byte	W11
	.byte		N10   , Gn3 , v104
	.byte	W12
	.byte		N05   , En3 , v084
	.byte	W13
@ 011   ----------------------------------------
	.byte		N11   , An3 , v120
	.byte	W12
	.byte		N09   , Gn3 , v096
	.byte	W11
	.byte		N05   , En3 , v076
	.byte	W12
	.byte		N11   , An3 , v124
	.byte	W11
	.byte		        Gn3 , v084
	.byte	W13
	.byte		N06   , En3 , v080
	.byte	W12
	.byte		N11   , An3 , v120
	.byte	W01
@ 012   ----------------------------------------
	.byte	W11
	.byte		N10   , Gn3 , v104
	.byte	W12
	.byte		N07   , En3 , v080
	.byte	W12
	.byte		N09   , An3 , v120
	.byte	W12
	.byte		N08   , Gn3 , v104
	.byte	W12
	.byte		N07   , En3 , v076
	.byte	W12
	.byte		N11   , An3 , v120
	.byte	W01
@ 013   ----------------------------------------
	.byte	W11
	.byte		        Gn3 , v092
	.byte	W12
	.byte		N08   , En3 , v080
	.byte	W12
	.byte		N09   , An3 , v116
	.byte	W12
	.byte		        Gn3 , v104
	.byte	W12
	.byte		N08   , En3 , v080
	.byte	W12
	.byte		N11   , An3 , v120
	.byte	W01
@ 014   ----------------------------------------
	.byte	W11
	.byte		N09   , Fs3 , v092
	.byte	W12
	.byte		N10   , Dn3 
	.byte	W12
	.byte		N11   , An3 , v104
	.byte	W12
	.byte		N13   , Fs3 , v096
	.byte	W12
	.byte		N08   , Dn3 , v088
	.byte	W11
	.byte		N24   , An3 , v108, gtp1
	.byte	W02
@ 015   ----------------------------------------
	.byte	W23
	.byte		N22   , Bn3 , v100
	.byte	W23
	.byte		N21   , Cs4 , v092
	.byte	W24
	.byte		N08   , Dn4 
	.byte	W02
@ 016   ----------------------------------------
	.byte	W44
	.byte	W02
	.byte		N07   , Gn3 , v096
	.byte		N07   , An3 , v092
	.byte		N07   , Cs4 , v096
	.byte	W24
	.byte		N13   , Dn4 , v080
	.byte	W01
	.byte		        Fs3 , v100
	.byte		N13   , An3 , v092
	.byte	W01
@ 017   ----------------------------------------
	.byte	W68
	.byte	W01
	.byte		N32   , An3 , v080, gtp2
	.byte	W03
@ 018   ----------------------------------------
	.byte	W36
	.byte	W01
	.byte		N05   , An3 , v076
	.byte	W10
	.byte		N22   , An3 , v072
	.byte	W23
	.byte		N48   , As3 , v080
	.byte	W02
@ 019   ----------------------------------------
	.byte	W44
	.byte	W01
	.byte		N24   , An3 , v068, gtp1
	.byte	W24
	.byte	W03
@ 020   ----------------------------------------
	.byte		N48   , Dn4 , v088, gtp2
	.byte	W44
	.byte	W03
	.byte		N24   , An3 , v068, gtp1
	.byte	W24
	.byte		N48   , Fn3 , v076, gtp2
	.byte	W01
@ 021   ----------------------------------------
	.byte	W44
	.byte	W01
	.byte		N24   , Dn3 , v068, gtp1
	.byte	W24
	.byte	W02
	.byte		N42   , Fn3 , v072
	.byte	W01
@ 022   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		TIE   , En3 
	.byte	W30
	.byte	W01
@ 023   ----------------------------------------
	.byte	W68
	.byte		EOT   
	.byte	W04
@ 024   ----------------------------------------
	.byte	W72
@ 025   ----------------------------------------
	.byte	W72
@ 026   ----------------------------------------
	.byte		N19   , Gn3 , v092
	.byte	W24
	.byte		N16   , Gn3 , v076
	.byte	W23
	.byte		N21   , Gn3 , v084
	.byte	W24
	.byte	W01
@ 027   ----------------------------------------
	.byte		N44   , An3 , v088, gtp3
	.byte	W44
	.byte	W03
	.byte		N23   , As3 , v072
	.byte	W24
	.byte		N44   , An3 , v088, gtp2
	.byte	W01
@ 028   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		N23   , En3 , v084
	.byte	W24
	.byte	W01
@ 029   ----------------------------------------
	.byte		N44   , Gn3 , v092, gtp3
	.byte	W44
	.byte	W03
	.byte		N21   , Fn3 , v084
	.byte	W24
	.byte		N22   , En3 , v072
	.byte	W01
@ 030   ----------------------------------------
	.byte	W23
	.byte		TIE   , Dn3 , v092
	.byte	W48
	.byte	W01
@ 031   ----------------------------------------
	.byte	W72
@ 032   ----------------------------------------
	.byte	W02
	.byte		EOT   
	.byte	W68
	.byte	W02
@ 033   ----------------------------------------
	.byte	W68
	.byte	W03
	.byte		N30   , An3 , v088
	.byte	W01
@ 034   ----------------------------------------
	.byte	W36
	.byte		N08   , An3 , v092
	.byte	W11
	.byte		N24   , An3 , v072, gtp1
	.byte	W24
	.byte	W01
@ 035   ----------------------------------------
	.byte		N44   , As3 , v084
	.byte	W44
	.byte	W03
	.byte		N24   , An3 
	.byte	W24
	.byte	W01
@ 036   ----------------------------------------
	.byte		N60   , Dn4 , v092, gtp2
	.byte	W72
@ 037   ----------------------------------------
	.byte		N19   
	.byte	W24
	.byte		N24   , Dn4 , v088, gtp2
	.byte	W24
	.byte		N23   , Cn4 , v084
	.byte	W23
	.byte		N36   , As3 , v076, gtp1
	.byte	W01
@ 038   ----------------------------------------
	.byte	W36
	.byte		TIE   , Gn3 
	.byte	W36
@ 039   ----------------------------------------
	.byte	W64
	.byte	W01
	.byte		EOT   
	.byte	W06
	.byte		N24   , Gn3 , v088, gtp1
	.byte	W01
@ 040   ----------------------------------------
	.byte	W24
	.byte		N36   , An3 , v104, gtp2
	.byte	W36
	.byte	W01
	.byte		N15   , As3 , v084
	.byte	W11
@ 041   ----------------------------------------
	.byte		N22   , Gn3 , v088
	.byte	W24
	.byte		N24   , Fn3 , v100, gtp1
	.byte	W24
	.byte		N19   , En3 , v092
	.byte	W23
	.byte		N24   , Fn3 , v084, gtp2
	.byte	W01
@ 042   ----------------------------------------
	.byte	W23
	.byte		N40   , Gn3 
	.byte	W36
	.byte	W01
	.byte		N17   , An3 , v088
	.byte	W12
@ 043   ----------------------------------------
	.byte		N48   , Fn3 , v092, gtp3
	.byte	W48
	.byte		N11   , En3 , v096
	.byte	W11
	.byte		N07   , Dn3 , v088
	.byte	W13
@ 044   ----------------------------------------
	.byte		N32   , En3 , v088, gtp3
	.byte	W36
	.byte		N11   , As3 , v076
	.byte	W12
	.byte		N24   , An3 , v068, gtp2
	.byte	W23
	.byte		N40   , Gn3 , v088
	.byte	W01
@ 045   ----------------------------------------
	.byte	W36
	.byte		N13   , Fn3 
	.byte	W11
	.byte		N19   , En3 , v084
	.byte	W24
	.byte		TIE   , Dn3 , v092
	.byte	W01
@ 046   ----------------------------------------
	.byte	W72
@ 047   ----------------------------------------
	.byte	W72
@ 048   ----------------------------------------
	.byte	W06
	.byte		EOT   
	.byte	W40
	.byte	W01
	.byte		N16   , Dn4 , v080
	.byte	W24
	.byte	W01
@ 049   ----------------------------------------
mus_romagna_mia_4_049:
	.byte		N44   , Dn4 , v088
	.byte	W44
	.byte	W03
	.byte		N24   , Cs4 , v080, gtp2
	.byte	W24
	.byte	W01
	.byte	PEND
@ 050   ----------------------------------------
mus_romagna_mia_4_050:
	.byte		N68   , En4 , v080, gtp3
	.byte	W68
	.byte	W03
	.byte		TIE   , Dn4 , v084
	.byte	W01
	.byte	PEND
@ 051   ----------------------------------------
	.byte	W72
@ 052   ----------------------------------------
	.byte	W44
	.byte	W02
	.byte		EOT   
	.byte		N24   , Cs4 , v076, gtp2
	.byte	W24
	.byte	W01
	.byte		N44   , Bn3 , v084, gtp1
	.byte	W01
@ 053   ----------------------------------------
mus_romagna_mia_4_053:
	.byte	W44
	.byte	W03
	.byte		N24   , Fs3 , v064
	.byte	W24
	.byte	W01
	.byte	PEND
@ 054   ----------------------------------------
mus_romagna_mia_4_054:
	.byte		N23   , An3 , v072
	.byte	W23
	.byte		TIE   , Gn3 , v080
	.byte	W48
	.byte	W01
	.byte	PEND
@ 055   ----------------------------------------
	.byte	W72
@ 056   ----------------------------------------
	.byte	W32
	.byte	W02
	.byte		EOT   
	.byte	W14
	.byte		N15   , Cs4 , v076
	.byte	W24
@ 057   ----------------------------------------
mus_romagna_mia_4_057:
	.byte		N44   , Cs4 , v080, gtp3
	.byte	W44
	.byte	W03
	.byte		N24   , Bn3 , v068
	.byte	W24
	.byte		N05   , Cs4 , v024
	.byte		N72   , Dn4 , v096
	.byte	W01
	.byte	PEND
@ 058   ----------------------------------------
	.byte	W72
@ 059   ----------------------------------------
	.byte		TIE   , Cs4 , v084
	.byte	W72
@ 060   ----------------------------------------
mus_romagna_mia_4_060:
	.byte	W44
	.byte	W03
	.byte		N16   , Bn3 , v088
	.byte	W03
	.byte	PEND
	.byte		EOT   , Cs4 
	.byte	W22
@ 061   ----------------------------------------
mus_romagna_mia_4_061:
	.byte		N44   , Bn3 , v080, gtp1
	.byte	W44
	.byte	W03
	.byte		N22   , Gn3 , v072
	.byte	W24
	.byte		N13   , Fs3 , v088
	.byte	W01
	.byte	PEND
@ 062   ----------------------------------------
mus_romagna_mia_4_062:
	.byte	W11
	.byte		N09   , Gn3 , v072
	.byte	W11
	.byte		TIE   , An3 , v088
	.byte	W48
	.byte	W02
	.byte	PEND
@ 063   ----------------------------------------
	.byte	W68
	.byte	W02
	.byte		EOT   
	.byte	W02
@ 064   ----------------------------------------
mus_romagna_mia_4_064:
	.byte	W44
	.byte	W03
	.byte		N18   , Dn4 , v088
	.byte	W24
	.byte		N44   , Dn4 , v088, gtp1
	.byte	W01
	.byte	PEND
@ 065   ----------------------------------------
mus_romagna_mia_4_065:
	.byte	W44
	.byte	W03
	.byte		N22   , Cs4 , v064
	.byte	W24
	.byte		N72   , En4 , v088, gtp1
	.byte	W01
	.byte	PEND
@ 066   ----------------------------------------
mus_romagna_mia_4_066:
	.byte	W68
	.byte	W03
	.byte		TIE   , Dn4 , v076
	.byte	W01
	.byte	PEND
@ 067   ----------------------------------------
	.byte	W72
@ 068   ----------------------------------------
	.byte	W36
	.byte	W03
	.byte		EOT   
	.byte	W09
	.byte		N16   , Dn4 , v072
	.byte	W24
@ 069   ----------------------------------------
mus_romagna_mia_4_069:
	.byte		N44   , Dn4 , v088
	.byte	W44
	.byte	W03
	.byte		N17   , Cs4 , v084
	.byte	W24
	.byte	W01
	.byte	PEND
@ 070   ----------------------------------------
mus_romagna_mia_4_070:
	.byte		N20   , Cs4 , v080
	.byte	W22
	.byte		TIE   , Bn3 
	.byte	W48
	.byte	W02
	.byte	PEND
@ 071   ----------------------------------------
	.byte	W72
@ 072   ----------------------------------------
	.byte	W42
	.byte		EOT   
	.byte	W05
	.byte		N17   , En4 , v076
	.byte	W24
	.byte	W01
@ 073   ----------------------------------------
mus_romagna_mia_4_073:
	.byte		N44   , En4 , v084, gtp3
	.byte	W44
	.byte	W03
	.byte		N19   , Dn4 , v076
	.byte	W24
	.byte	W01
	.byte	PEND
@ 074   ----------------------------------------
mus_romagna_mia_4_074:
	.byte		N66   , Dn4 , v080, gtp1
	.byte	W68
	.byte	W02
	.byte		TIE   , An3 , v072
	.byte	W02
	.byte	PEND
@ 075   ----------------------------------------
	.byte	W72
@ 076   ----------------------------------------
	.byte	W44
	.byte		EOT   
	.byte	W03
	.byte		N28   , En4 , v080
	.byte	W24
	.byte	W01
@ 077   ----------------------------------------
mus_romagna_mia_4_077:
	.byte		N42   , Dn4 , v084, gtp1
	.byte	W44
	.byte	W03
	.byte		N20   , Cs4 , v052
	.byte	W19
	.byte		N05   , Dn4 , v076
	.byte	W05
	.byte		N22   , En4 , v100
	.byte	W01
	.byte	PEND
@ 078   ----------------------------------------
mus_romagna_mia_4_078:
	.byte	W22
	.byte		TIE   , Dn4 , v088
	.byte	W48
	.byte	W02
	.byte	PEND
@ 079   ----------------------------------------
	.byte	W72
@ 080   ----------------------------------------
	.byte	W72
@ 081   ----------------------------------------
	.byte	W32
	.byte		EOT   
	.byte	W15
	.byte		N24   , Cs4 , v092, gtp2
	.byte	W24
	.byte	W01
@ 082   ----------------------------------------
	.byte		N66   , Dn4 , v076
	.byte	W72
@ 083   ----------------------------------------
	.byte		TIE   , Dn4 , v080
	.byte	W72
@ 084   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		EOT   
	.byte	W07
	.byte		N16   , Dn4 , v076
	.byte	W24
@ 085   ----------------------------------------
mus_romagna_mia_4_085:
	.byte		N36   , Dn4 , v088, gtp2
	.byte	W44
	.byte	W03
	.byte		N24   , Dn4 , v076
	.byte	W24
	.byte		        Bn3 , v080, gtp1
	.byte	W01
	.byte	PEND
@ 086   ----------------------------------------
mus_romagna_mia_4_086:
	.byte	W23
	.byte		TIE   , An3 , v076
	.byte	W48
	.byte	W01
	.byte	PEND
@ 087   ----------------------------------------
	.byte	W72
@ 088   ----------------------------------------
	.byte	W36
	.byte	W03
	.byte		EOT   
	.byte	W07
	.byte		N20   , Dn4 , v088
	.byte	W24
	.byte	W02
@ 089   ----------------------------------------
mus_romagna_mia_4_089:
	.byte		N44   , Dn4 , v080, gtp1
	.byte	W44
	.byte	W03
	.byte		N28   , Cs4 
	.byte	W24
	.byte	W01
	.byte	PEND
@ 090   ----------------------------------------
	.byte		TIE   , En4 , v072
	.byte	W72
@ 091   ----------------------------------------
	.byte	W72
@ 092   ----------------------------------------
	.byte	W44
	.byte		EOT   
	.byte	W03
	.byte		N19   , Cs4 , v080
	.byte	W24
	.byte	W01
@ 093   ----------------------------------------
mus_romagna_mia_4_093:
	.byte		N44   , Cs4 , v072, gtp1
	.byte	W44
	.byte	W03
	.byte		N22   , Bn3 , v068
	.byte	W24
	.byte		TIE   , Dn4 , v092
	.byte	W01
	.byte	PEND
@ 094   ----------------------------------------
	.byte	W72
@ 095   ----------------------------------------
	.byte	W68
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 096   ----------------------------------------
	.byte	W72
@ 097   ----------------------------------------
	.byte	W72
@ 098   ----------------------------------------
	.byte	W72
@ 099   ----------------------------------------
	.byte	W72
@ 100   ----------------------------------------
	.byte	W72
@ 101   ----------------------------------------
	.byte	W72
@ 102   ----------------------------------------
	.byte	W72
@ 103   ----------------------------------------
	.byte		N56   , An4 , v076, gtp1
	.byte	W56
	.byte	W03
	.byte		N05   
	.byte	W06
	.byte		        Gs4 , v072
	.byte	W06
	.byte		N52   , Gn4 , v076
	.byte	W01
@ 104   ----------------------------------------
	.byte	W52
	.byte	W01
	.byte		N04   , Gn4 , v072
	.byte	W06
	.byte		N05   , Fs4 
	.byte	W06
	.byte		        Fn4 , v064
	.byte	W07
@ 105   ----------------------------------------
	.byte		N56   , En4 , v072, gtp1
	.byte	W44
	.byte	W03
	.byte		N10   
	.byte	W13
	.byte		N05   , Ds4 , v080
	.byte	W05
	.byte		        Dn4 , v076
	.byte	W06
	.byte		TIE   , Cs4 , v072
	.byte	W01
@ 106   ----------------------------------------
	.byte	W72
@ 107   ----------------------------------------
	.byte	W68
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 108   ----------------------------------------
	.byte	W72
@ 109   ----------------------------------------
	.byte	W72
@ 110   ----------------------------------------
	.byte	W68
	.byte	W02
	.byte		N60   , An4 , v084, gtp2
	.byte	W02
@ 111   ----------------------------------------
	.byte	W54
	.byte	W01
	.byte		N11   , Dn4 , v052
	.byte	W06
	.byte		N10   , Ds4 , v056
	.byte	W04
	.byte		N08   , En4 , v060
	.byte	W06
	.byte		N64   , Fn4 , v080, gtp1
	.byte	W01
@ 112   ----------------------------------------
	.byte	W56
	.byte		N11   , En4 , v060
	.byte	W07
	.byte		        Ds4 
	.byte	W09
@ 113   ----------------------------------------
	.byte		N24   , Dn4 , v076
	.byte	W22
	.byte		N36   , Cn4 , v072, gtp3
	.byte	W40
	.byte		N06   , As3 , v084
	.byte	W06
	.byte		N07   , Cn4 , v068
	.byte	W04
@ 114   ----------------------------------------
	.byte		        As3 , v052
	.byte	W05
	.byte		TIE   , An3 , v068
	.byte	W66
	.byte	W01
@ 115   ----------------------------------------
	.byte	W68
	.byte	W02
	.byte		        Fs3 , v048
	.byte	W01
	.byte		        Dn3 , v060
	.byte		N02   , An3 , v068
	.byte	W01
	.byte		EOT   
@ 116   ----------------------------------------
	.byte	W72
@ 117   ----------------------------------------
	.byte	W68
	.byte	W01
	.byte		        Fs3 
	.byte	W02
	.byte		TIE   , Gn3 , v060
	.byte		TIE   , As3 , v056
	.byte	W01
@ 118   ----------------------------------------
	.byte	W72
@ 119   ----------------------------------------
	.byte	W72
@ 120   ----------------------------------------
	.byte	W72
@ 121   ----------------------------------------
	.byte	W68
	.byte		EOT   , Gn3 
	.byte	W03
	.byte		        As3 
	.byte		TIE   , Fn3 , v064
	.byte		TIE   , An3 , v072
	.byte	W01
@ 122   ----------------------------------------
	.byte	W72
@ 123   ----------------------------------------
	.byte	W68
	.byte	W02
	.byte		EOT   , Dn3 
	.byte	W01
	.byte		TIE   , Cs3 , v044
	.byte		TIE   , Gn3 , v064
	.byte	W01
@ 124   ----------------------------------------
	.byte	W01
	.byte		EOT   , Fn3 
	.byte	W68
	.byte	W03
@ 125   ----------------------------------------
	.byte	W68
	.byte	W02
	.byte		        Gn3 
	.byte	W01
	.byte		N68   , Fs3 , v048, gtp1
	.byte	W01
	.byte		EOT   , Cs3 
@ 126   ----------------------------------------
	.byte		N68   , Dn3 , v052, gtp1
	.byte	W68
	.byte	W02
	.byte		EOT   , An3 
	.byte	W02
@ 127   ----------------------------------------
	.byte	W02
	.byte		N06   , An3 , v092
	.byte	W08
	.byte		N12   , Bn3 , v072
	.byte	W07
	.byte		N11   , An3 , v088
	.byte	W07
	.byte		N24   , Gs3 , v092
	.byte	W23
	.byte		        Gn3 , v096, gtp1
	.byte	W23
	.byte		N05   , Dn3 , v112
	.byte		N09   , Fs3 , v108
	.byte	W02
@ 128   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		N16   , Dn4 , v080
	.byte	W24
	.byte	W01
@ 129   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_049
@ 130   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_050
@ 131   ----------------------------------------
	.byte	W72
@ 132   ----------------------------------------
	.byte	W44
	.byte	W02
	.byte		EOT   , Dn4 
	.byte		N24   , Cs4 , v076, gtp2
	.byte	W24
	.byte	W01
	.byte		N44   , Bn3 , v084, gtp1
	.byte	W01
@ 133   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_053
@ 134   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_054
@ 135   ----------------------------------------
	.byte	W72
@ 136   ----------------------------------------
	.byte	W32
	.byte	W02
	.byte		EOT   , Gn3 
	.byte	W14
	.byte		N15   , Cs4 , v076
	.byte	W24
@ 137   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_057
@ 138   ----------------------------------------
	.byte	W72
@ 139   ----------------------------------------
	.byte		TIE   , Cs4 , v084
	.byte	W72
@ 140   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_060
	.byte		EOT   , Cs4 
	.byte	W22
@ 141   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_061
@ 142   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_062
@ 143   ----------------------------------------
	.byte	W68
	.byte	W02
	.byte		EOT   , An3 
	.byte	W02
@ 144   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_064
@ 145   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_065
@ 146   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_066
@ 147   ----------------------------------------
	.byte	W72
@ 148   ----------------------------------------
	.byte	W36
	.byte	W03
	.byte		EOT   , Dn4 
	.byte	W09
	.byte		N16   , Dn4 , v072
	.byte	W24
@ 149   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_069
@ 150   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_070
@ 151   ----------------------------------------
	.byte	W72
@ 152   ----------------------------------------
	.byte	W42
	.byte		EOT   , Bn3 
	.byte	W05
	.byte		N17   , En4 , v076
	.byte	W24
	.byte	W01
@ 153   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_073
@ 154   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_074
@ 155   ----------------------------------------
	.byte	W72
@ 156   ----------------------------------------
	.byte	W44
	.byte		EOT   , An3 
	.byte	W03
	.byte		N28   , En4 , v080
	.byte	W24
	.byte	W01
@ 157   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_077
@ 158   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_078
@ 159   ----------------------------------------
	.byte	W72
@ 160   ----------------------------------------
	.byte	W72
@ 161   ----------------------------------------
	.byte	W32
	.byte		EOT   , Dn4 
	.byte	W15
	.byte		N24   , Cs4 , v092, gtp2
	.byte	W24
	.byte	W01
@ 162   ----------------------------------------
	.byte		N66   , Dn4 , v076
	.byte	W72
@ 163   ----------------------------------------
	.byte		TIE   , Dn4 , v080
	.byte	W72
@ 164   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		EOT   
	.byte	W07
	.byte		N16   , Dn4 , v076
	.byte	W24
@ 165   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_085
@ 166   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_086
@ 167   ----------------------------------------
	.byte	W72
@ 168   ----------------------------------------
	.byte	W36
	.byte	W03
	.byte		EOT   , An3 
	.byte	W07
	.byte		N20   , Dn4 , v088
	.byte	W24
	.byte	W02
@ 169   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_089
@ 170   ----------------------------------------
	.byte		TIE   , En4 , v072
	.byte	W72
@ 171   ----------------------------------------
	.byte	W72
@ 172   ----------------------------------------
	.byte	W44
	.byte		EOT   
	.byte	W03
	.byte		N19   , Cs4 , v080
	.byte	W24
	.byte	W01
@ 173   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_093
@ 174   ----------------------------------------
	.byte	W72
@ 175   ----------------------------------------
	.byte	W68
	.byte	W03
	.byte		EOT   , Dn4 
	.byte	W01
@ 176   ----------------------------------------
	.byte	W72
@ 177   ----------------------------------------
	.byte	W68
	.byte	W03
	.byte		N04   , An3 , v100
	.byte	W01
@ 178   ----------------------------------------
	.byte	W06
	.byte		        Gs3 , v092
	.byte	W07
	.byte		N05   , An3 , v084
	.byte	W08
	.byte		N04   , As3 , v104
	.byte	W07
	.byte		        Bn3 , v068
	.byte	W09
	.byte		        Cn4 , v108
	.byte	W08
	.byte		        Cs4 , v104
	.byte	W08
	.byte		N05   , Dn4 , v072
	.byte	W09
	.byte		N04   , En4 , v104
	.byte	W08
	.byte		N06   , Fs4 , v096
	.byte	W02
@ 179   ----------------------------------------
	.byte	W06
	.byte		N07   , Dn4 , v100
	.byte	W09
	.byte		N05   , An3 , v096
	.byte	W08
	.byte		        Fs4 , v104
	.byte	W08
	.byte		N06   , Dn4 , v088
	.byte	W08
	.byte		N04   , An3 
	.byte	W09
	.byte		        Fs3 , v100
	.byte	W08
	.byte		N05   , An3 , v088
	.byte	W07
	.byte		N03   , Fs3 
	.byte	W08
	.byte		        Fs3 , v084
	.byte	W01
@ 180   ----------------------------------------
	.byte		        Dn3 , v088
	.byte		N03   , An3 , v092
	.byte	W15
	.byte		N02   , Fs3 , v104
	.byte	W01
	.byte		        Dn3 , v064
	.byte		N01   , An3 , v060
	.byte	W06
	.byte		N03   , Dn3 , v072
	.byte		N02   , Fs3 , v088
	.byte		N02   , An3 , v084
	.byte	W24
	.byte	W02
	.byte		N04   , Dn3 , v060
	.byte		N03   , Fs3 , v084
	.byte		N04   , An3 , v068
	.byte	W22
	.byte		N42   , An3 , v076, gtp1
	.byte	W01
	.byte		N40   , Dn3 , v064, gtp1
	.byte		N42   , Fs3 , v084, gtp1
	.byte	W01
@ 181   ----------------------------------------
	.byte	W44
	.byte	W03
	.byte		N18   , Dn3 , v068
	.byte		N19   , Fs3 , v060
	.byte		N19   , An3 , v072
	.byte	W24
	.byte		N05   , An2 , v112
	.byte	W01
@ 182   ----------------------------------------
	.byte	W07
	.byte		N04   , Gs2 , v092
	.byte	W08
	.byte		N05   , An2 , v088
	.byte	W08
	.byte		N04   , As2 , v112
	.byte	W07
	.byte		N05   , An2 , v084
	.byte	W09
	.byte		        As2 , v120
	.byte	W07
	.byte		        Bn2 , v088
	.byte	W08
	.byte		        As2 , v116
	.byte	W09
	.byte		        Bn2 , v080
	.byte	W08
	.byte		N04   , Cn3 , v112
	.byte	W01
@ 183   ----------------------------------------
	.byte	W06
	.byte		        Bn2 , v092
	.byte	W08
	.byte		        Cn3 , v112
	.byte	W09
	.byte		        Cs3 , v104
	.byte	W07
	.byte		N05   , Dn3 , v080
	.byte	W09
	.byte		        Ds3 , v116
	.byte	W08
	.byte		        En3 , v072
	.byte	W08
	.byte		N04   , Fn3 , v112
	.byte	W08
	.byte		        Fs3 
	.byte	W08
	.byte		N05   , Gn3 , v116
	.byte	W01
@ 184   ----------------------------------------
	.byte	W15
	.byte		N02   , Gn3 , v072
	.byte	W01
	.byte		        Cs3 , v080
	.byte		N02   , En3 , v076
	.byte	W04
	.byte		N04   , En3 , v088
	.byte	W01
	.byte		N02   , Cs3 , v060
	.byte		N04   , Gn3 , v096
	.byte	W24
	.byte	W01
	.byte		N06   , Cs3 , v100
	.byte	W01
	.byte		N03   , En3 , v084
	.byte		N03   , Gn3 , v080
	.byte	W24
	.byte		N42   , Cs3 , v112
	.byte		N42   , En3 , v100, gtp1
	.byte		N42   , Gn3 , v088, gtp1
	.byte	W01
@ 185   ----------------------------------------
	.byte	W44
	.byte	W02
	.byte		N07   , Cs3 , v084
	.byte	W01
	.byte		        En3 , v100
	.byte		N07   , Gn3 , v092
	.byte	W24
	.byte		N04   , Fs4 , v084
	.byte	W01
@ 186   ----------------------------------------
	.byte	W01
	.byte		N05   , Gn4 
	.byte	W10
	.byte		N04   , Fs4 , v116
	.byte	W12
	.byte		        En4 , v104
	.byte	W11
	.byte		        Dn4 , v096
	.byte	W13
	.byte		        Cs4 , v104
	.byte	W11
	.byte		N05   , Bn3 , v096
	.byte	W12
	.byte		N04   , An3 , v100
	.byte	W02
@ 187   ----------------------------------------
	.byte	W05
	.byte		N06   , Gs3 , v088
	.byte	W09
	.byte		N05   , An3 , v068
	.byte	W08
	.byte		        Bn3 , v096
	.byte	W07
	.byte		N06   , An3 , v084
	.byte	W09
	.byte		N05   , Bn3 , v092
	.byte	W09
	.byte		N04   , Cs4 , v096
	.byte	W06
	.byte		N05   , Bn3 , v080
	.byte	W07
	.byte		        Cs4 , v088
	.byte	W10
	.byte		        En4 , v104
	.byte	W02
@ 188   ----------------------------------------
	.byte	W06
	.byte		        Cs4 , v096
	.byte	W08
	.byte		N04   , An3 , v088
	.byte	W08
	.byte		N05   , Gn3 , v108
	.byte	W08
	.byte		N06   , An3 , v104
	.byte	W08
	.byte		        Gn3 , v112
	.byte	W08
	.byte		N03   , En3 , v088
	.byte	W08
	.byte		N06   , Cs3 , v104
	.byte	W09
	.byte		N05   , En3 
	.byte	W08
	.byte		N06   , Cs3 , v116
	.byte	W01
@ 189   ----------------------------------------
	.byte	W06
	.byte		N05   , An2 , v100
	.byte	W08
	.byte		        Gs2 , v096
	.byte	W08
	.byte		N06   , An2 , v076
	.byte	W08
	.byte		N04   , As2 , v120
	.byte	W07
	.byte		N06   , Bn2 , v084
	.byte	W08
	.byte		N05   , Cn3 , v112
	.byte	W08
	.byte		        Cs3 , v116
	.byte	W08
	.byte		N06   , Dn3 , v092
	.byte	W09
	.byte		N02   , Fs3 
	.byte		N03   , An3 , v100
	.byte	W01
	.byte		        Dn3 , v068
	.byte	W01
@ 190   ----------------------------------------
	.byte	W15
	.byte		        Dn3 , v076
	.byte	W01
	.byte		N01   , Fs3 , v100
	.byte		N02   , An3 , v088
	.byte	W05
	.byte		N03   , Fs3 , v092
	.byte	W01
	.byte		N04   , Dn3 , v088
	.byte		N03   , An3 , v092
	.byte	W23
	.byte		N04   , Dn3 , v076
	.byte		N05   , Fs3 , v092
	.byte		N05   , An3 , v072
	.byte	W24
	.byte	W01
	.byte		N19   , An3 , v068
	.byte		N23   , Fs4 , v104
	.byte	W02
@ 191   ----------------------------------------
	.byte	W21
	.byte		        Fn4 , v072
	.byte	W01
	.byte		N20   , Gs3 , v112
	.byte	W23
	.byte		N19   , Gn3 , v104
	.byte		N24   , En4 , v068
	.byte	W24
	.byte	W01
	.byte		N10   , Fs3 , v116
	.byte		N10   , Dn4 , v088
	.byte	W02
@ 192   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_064
@ 193   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_065
@ 194   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_066
@ 195   ----------------------------------------
	.byte	W72
@ 196   ----------------------------------------
	.byte	W36
	.byte	W03
	.byte		EOT   , Dn4 
	.byte	W09
	.byte		N16   , Dn4 , v072
	.byte	W24
@ 197   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_069
@ 198   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_070
@ 199   ----------------------------------------
	.byte	W72
@ 200   ----------------------------------------
	.byte	W42
	.byte		EOT   , Bn3 
	.byte	W05
	.byte		N17   , En4 , v076
	.byte	W24
	.byte	W01
@ 201   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_073
@ 202   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_074
@ 203   ----------------------------------------
	.byte	W72
@ 204   ----------------------------------------
	.byte	W44
	.byte		EOT   , An3 
	.byte	W03
	.byte		N28   , En4 , v080
	.byte	W24
	.byte	W01
@ 205   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_077
@ 206   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_078
@ 207   ----------------------------------------
	.byte	W72
@ 208   ----------------------------------------
	.byte	W72
@ 209   ----------------------------------------
	.byte	W32
	.byte		EOT   , Dn4 
	.byte	W15
	.byte		N24   , Cs4 , v092, gtp2
	.byte	W24
	.byte	W01
@ 210   ----------------------------------------
	.byte		N66   , Dn4 , v076
	.byte	W72
@ 211   ----------------------------------------
	.byte		TIE   , Dn4 , v080
	.byte	W72
@ 212   ----------------------------------------
	.byte	W40
	.byte	W01
	.byte		EOT   
	.byte	W07
	.byte		N16   , Dn4 , v076
	.byte	W24
@ 213   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_085
@ 214   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_086
@ 215   ----------------------------------------
	.byte	W72
@ 216   ----------------------------------------
	.byte	W36
	.byte	W03
	.byte		EOT   , An3 
	.byte	W07
	.byte		N20   , Dn4 , v088
	.byte	W24
	.byte	W02
@ 217   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_089
@ 218   ----------------------------------------
	.byte		TIE   , En4 , v072
	.byte	W72
@ 219   ----------------------------------------
	.byte	W72
@ 220   ----------------------------------------
	.byte	W44
	.byte		EOT   
	.byte	W03
	.byte		N19   , Cs4 , v080
	.byte	W24
	.byte	W01
@ 221   ----------------------------------------
	.byte	PATT
	 .word	mus_romagna_mia_4_093
@ 222   ----------------------------------------
	.byte	W72
@ 223   ----------------------------------------
	.byte	W68
	.byte	W03
	.byte		EOT   , Dn4 
	.byte	W01
@ 224   ----------------------------------------
	.byte	W72
@ 225   ----------------------------------------
	.byte	W72
@ 226   ----------------------------------------
	.byte	W24
	.byte	FINE

@******************************************************@
	.align	2

mus_romagna_mia:
	.byte	4	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_romagna_mia_pri	@ Priority
	.byte	mus_romagna_mia_rev	@ Reverb.

	.word	mus_romagna_mia_grp

	.word	mus_romagna_mia_1
	.word	mus_romagna_mia_2
	.word	mus_romagna_mia_3
	.word	mus_romagna_mia_4

	.end
