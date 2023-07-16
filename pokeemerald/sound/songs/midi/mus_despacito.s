	.include "MPlayDef.s"

	.equ	mus_despacito_grp, voicegroup011
	.equ	mus_despacito_pri, 0
	.equ	mus_despacito_rev, reverb_set+50
	.equ	mus_despacito_mvl, 80
	.equ	mus_despacito_key, 0
	.equ	mus_despacito_tbs, 1
	.equ	mus_despacito_exg, 1
	.equ	mus_despacito_cmp, 1

	.section .rodata
	.global	mus_despacito
	.align	2

@**************** Track 1 (Midi-Chn.3) ****************@

mus_despacito_1:
	.byte		VOL   , 127*mus_despacito_mvl/mxv
	.byte	KEYSH , mus_despacito_key+0
@ 000   ----------------------------------------
@ 001   ----------------------------------------
	.byte	TEMPO , 89*mus_despacito_tbs/2
	.byte		VOICE , 24
	.byte	W48
	.byte		N12   , Bn2 , v104
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N12   
	.byte	W12
@ 002   ----------------------------------------
	.byte	W18
	.byte		N18   
	.byte	W48
	.byte		N24   
	.byte	W30
@ 003   ----------------------------------------
	.byte	W18
	.byte		N18   , An2 
	.byte	W48
	.byte		N18   
	.byte	W30
@ 004   ----------------------------------------
	.byte	W18
	.byte		N18   
	.byte	W78
@ 005   ----------------------------------------
mus_despacito_1_005:
	.byte	W12
	.byte		N06   , Bn2 , v092
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 007   ----------------------------------------
mus_despacito_1_007:
	.byte	W12
	.byte		N06   , An2 , v092
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 011   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 012   ----------------------------------------
mus_despacito_1_012:
	.byte	W12
	.byte		N06   , An2 , v092
	.byte	W24
	.byte		N06   
	.byte	W60
	.byte	PEND
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 020   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_012
@ 021   ----------------------------------------
mus_despacito_1_021:
	.byte		N06   , Bn2 , v092
	.byte	W06
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 023   ----------------------------------------
mus_despacito_1_023:
	.byte		N06   , An2 , v092
	.byte	W06
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 024   ----------------------------------------
mus_despacito_1_024:
	.byte		N06   , An2 , v092
	.byte	W06
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N06   
	.byte	W18
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 025   ----------------------------------------
mus_despacito_1_025:
	.byte	W06
	.byte		N06   , Bn2 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 027   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_023
@ 028   ----------------------------------------
mus_despacito_1_028:
	.byte		N06   , An2 , v092
	.byte	W06
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N06   
	.byte	W60
	.byte	PEND
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_023
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_024
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_025
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_023
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_028
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 041   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 042   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 043   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_012
@ 045   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_005
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_007
@ 052   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_012
@ 053   ----------------------------------------
	.byte	W96
@ 054   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 055   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 056   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_023
@ 057   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_024
@ 058   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_025
@ 059   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 060   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_023
@ 061   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_028
@ 062   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 063   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 064   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_023
@ 065   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_024
@ 066   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_025
@ 067   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_021
@ 068   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_023
@ 069   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_1_028
@ 070   ----------------------------------------
	.byte		TIE   , Fs2 , v092
	.byte	W96
@ 071   ----------------------------------------
	.byte	W96
@ 072   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 073   ----------------------------------------
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

mus_despacito_2:
	.byte	KEYSH , mus_despacito_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 24
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_despacito_mvl/mxv
	.byte		MOD   , 0
	.byte		BEND  , c_v+0
	.byte		N96   , Bn1 , v080
	.byte	W96
@ 001   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 002   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 003   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 013   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 014   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 015   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 016   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 017   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 018   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 019   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 020   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 021   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 022   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 023   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 024   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 025   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 026   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 027   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 028   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 029   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 030   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 031   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 032   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 033   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 034   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 035   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 036   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 037   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 038   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 039   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 040   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 041   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 042   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 043   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 044   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 045   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 046   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 047   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 048   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 049   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 050   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 051   ----------------------------------------
	.byte		TIE   , An1 
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 053   ----------------------------------------
	.byte		N96   , Bn1 
	.byte	W96
@ 054   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 055   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 056   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 057   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 058   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 059   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 060   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 061   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 062   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 063   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 064   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 065   ----------------------------------------
	.byte		        Bn1 
	.byte	W96
@ 066   ----------------------------------------
	.byte		        Gn1 
	.byte	W96
@ 067   ----------------------------------------
	.byte		        Dn2 
	.byte	W96
@ 068   ----------------------------------------
	.byte		        An1 
	.byte	W96
@ 069   ----------------------------------------
	.byte		TIE   , Bn1 
	.byte	W96
@ 070   ----------------------------------------
	.byte	W96
@ 071   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 072   ----------------------------------------
	.byte	FINE

@**************** Track 3 (Midi-Chn.1) ****************@

mus_despacito_3:
	.byte	KEYSH , mus_despacito_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 24
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_despacito_mvl/mxv
	.byte		MOD   , 0
	.byte		BEND  , c_v+0
	.byte	W72
	.byte		N06   , Dn4 , v104
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		N07   , An3 
	.byte	W06
@ 001   ----------------------------------------
	.byte	W72
	.byte		N06   , Dn4 
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		N07   , An3 
	.byte	W06
@ 002   ----------------------------------------
	.byte	W72
	.byte		N12   , Dn4 
	.byte	W18
	.byte		        En4 
	.byte	W06
@ 003   ----------------------------------------
	.byte	W44
	.byte	W01
	.byte		N03   , An3 
	.byte	W03
	.byte		N18   , Dn4 
	.byte	W24
	.byte		        Cs4 
	.byte	W24
@ 004   ----------------------------------------
	.byte		        Bn3 
	.byte		N18   , Bn4 
	.byte	W30
	.byte		N06   , Fs4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		N12   , Dn5 
	.byte	W12
	.byte		N06   , En5 
	.byte	W06
	.byte		N12   , Dn5 
	.byte	W12
	.byte		N06   , Cs5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        An4 
	.byte	W06
@ 005   ----------------------------------------
mus_despacito_3_005:
	.byte		N18   , Gn4 , v104
	.byte	W18
	.byte		N12   , Dn5 
	.byte	W18
	.byte		N24   
	.byte	W60
	.byte	PEND
@ 006   ----------------------------------------
mus_despacito_3_006:
	.byte		N12   , Dn5 , v104
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		        An4 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N06   , En5 
	.byte	W06
	.byte		N24   , Cs5 
	.byte	W06
	.byte	PEND
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte		N18   , Bn4 
	.byte	W30
	.byte		N06   , Fs4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		N12   , Dn5 
	.byte	W12
	.byte		N06   , En5 
	.byte	W06
	.byte		N12   , Dn5 
	.byte	W12
	.byte		N06   , Cs5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        An4 
	.byte	W06
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_005
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_006
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
mus_despacito_3_012:
	.byte		N18   , Bn4 , v104
	.byte	W24
	.byte		N06   , Fs4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W08
	.byte		N06   
	.byte	W10
	.byte		        Cs5 
	.byte	W06
	.byte	PEND
@ 013   ----------------------------------------
mus_despacito_3_013:
	.byte		N18   , Bn4 , v104
	.byte	W24
	.byte		N06   , Gn4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W10
	.byte		N07   , En5 
	.byte	W08
	.byte		N24   , An4 
	.byte	W06
	.byte	PEND
@ 014   ----------------------------------------
	.byte	W24
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W08
	.byte		        En5 
	.byte	W10
	.byte		N06   
	.byte	W06
@ 015   ----------------------------------------
	.byte	W06
	.byte		N60   , Cs5 
	.byte	W90
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_012
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_013
@ 018   ----------------------------------------
	.byte	W24
	.byte		N06   , An4 , v104
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W09
	.byte		        En5 
	.byte	W09
	.byte		N06   
	.byte	W06
@ 019   ----------------------------------------
	.byte	W05
	.byte		N36   , Cs5 
	.byte	W42
	.byte	W01
	.byte		N24   , Dn5 
	.byte	W24
	.byte		        Cs5 
	.byte	W24
@ 020   ----------------------------------------
mus_despacito_3_020:
	.byte		N12   , Bn4 , v104
	.byte	W12
	.byte		        Fs4 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		N06   , An4 
	.byte	W06
	.byte		N12   , Bn4 
	.byte	W06
	.byte	PEND
@ 021   ----------------------------------------
mus_despacito_3_021:
	.byte	W06
	.byte		N18   , Gn4 , v104
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		N06   , Cs5 
	.byte	W06
	.byte		N12   , Dn5 
	.byte	W06
	.byte	PEND
@ 022   ----------------------------------------
mus_despacito_3_022:
	.byte	W06
	.byte		N18   , An4 , v104
	.byte	W18
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		N06   , En5 
	.byte	W06
	.byte		N12   
	.byte	W06
	.byte	PEND
@ 023   ----------------------------------------
mus_despacito_3_023:
	.byte	W06
	.byte		N42   , Cs5 , v104
	.byte	W42
	.byte		N24   , Dn5 
	.byte	W24
	.byte		        Cs5 
	.byte	W24
	.byte	PEND
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_020
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_021
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_022
@ 027   ----------------------------------------
	.byte	W06
	.byte		N42   , Cs5 , v104
	.byte	W90
@ 028   ----------------------------------------
mus_despacito_3_028:
	.byte		N06   , Fs5 , v104
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Fs5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Fs5 
	.byte	W12
	.byte		        En5 
	.byte	W06
	.byte		        Fs5 
	.byte	W12
	.byte		        En5 
	.byte	W06
	.byte		        Fs5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Fs5 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N12   , Gn5 
	.byte	W06
	.byte	PEND
@ 029   ----------------------------------------
mus_despacito_3_029:
	.byte	W06
	.byte		N18   , Dn5 , v104
	.byte	W42
	.byte		N06   , Gn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W12
	.byte		        An5 
	.byte	W06
	.byte		        Gn5 
	.byte	W06
	.byte	PEND
@ 030   ----------------------------------------
mus_despacito_3_030:
	.byte	W06
	.byte		N18   , Fs5 , v104
	.byte	W42
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W12
	.byte		        An5 
	.byte	W06
	.byte		        Gn5 
	.byte	W06
	.byte		        Fs5 
	.byte	W06
	.byte	PEND
@ 031   ----------------------------------------
	.byte	W06
	.byte		N18   , En5 
	.byte	W90
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_028
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_029
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_030
@ 035   ----------------------------------------
	.byte	W06
	.byte		N18   , En5 , v104
	.byte	W48
	.byte		N06   , Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
@ 036   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		N02   , Cs5 
	.byte	W03
	.byte		N06   , Bn4 
	.byte	W09
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N02   , Cs5 
	.byte	W03
	.byte		N06   , Bn4 
	.byte	W09
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
@ 037   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		N02   , Cs5 
	.byte	W03
	.byte		N06   , Bn4 
	.byte	W09
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N02   , Cs5 
	.byte	W03
	.byte		N06   , Bn4 
	.byte	W09
	.byte		        En5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
@ 038   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Fs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
@ 039   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Fs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
@ 040   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , En5 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
@ 041   ----------------------------------------
	.byte		N06   
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , En5 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        En5 
	.byte	W06
@ 042   ----------------------------------------
	.byte		        Fs5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        En5 
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		        Fs5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
@ 043   ----------------------------------------
	.byte		N07   , En5 
	.byte	W08
	.byte		N06   
	.byte	W10
	.byte		        Dn5 
	.byte	W06
	.byte		N08   , En5 
	.byte	W10
	.byte		N06   
	.byte	W08
	.byte		        Dn5 
	.byte	W06
	.byte		N12   , En5 
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N07   
	.byte	W08
	.byte		N12   
	.byte	W10
	.byte		N02   
	.byte	W06
@ 044   ----------------------------------------
mus_despacito_3_044:
	.byte		N12   , Bn4 , v104
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N06   , Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N01   
	.byte	W06
	.byte		N12   , Bn4 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		        Dn5 
	.byte	W09
	.byte		N02   
	.byte	W09
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 045   ----------------------------------------
mus_despacito_3_045:
	.byte		N12   , Bn4 , v104
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N06   , Dn5 
	.byte	W06
	.byte		N08   
	.byte	W06
	.byte		N02   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   , Bn4 
	.byte	W12
	.byte		N12   
	.byte	W12
	.byte		N06   , En5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte	PEND
@ 046   ----------------------------------------
mus_despacito_3_046:
	.byte		N12   , En5 , v104
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N06   , En5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N12   
	.byte	W12
	.byte		        Dn5 
	.byte	W12
	.byte		N12   
	.byte	W09
	.byte		N03   
	.byte	W09
	.byte		N03   
	.byte	W06
	.byte	PEND
@ 047   ----------------------------------------
	.byte		N06   , Cs5 
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Bn4 
	.byte	W12
	.byte		N06   
	.byte	W12
	.byte		N07   , Dn5 
	.byte	W08
	.byte		N12   
	.byte	W10
	.byte		N02   
	.byte	W06
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_044
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_045
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_046
@ 051   ----------------------------------------
	.byte		N06   , Cs5 , v104
	.byte	W12
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		N06   
	.byte	W06
	.byte		        Bn4 
	.byte	W12
	.byte		N06   
	.byte	W36
@ 052   ----------------------------------------
	.byte	W48
	.byte		N24   , Dn5 
	.byte	W24
	.byte		        Cs5 
	.byte	W24
@ 053   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_020
@ 054   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_021
@ 055   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_022
@ 056   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_023
@ 057   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_020
@ 058   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_021
@ 059   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_022
@ 060   ----------------------------------------
	.byte	W06
	.byte		N42   , Cs5 , v104
	.byte	W90
@ 061   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_028
@ 062   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_029
@ 063   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_030
@ 064   ----------------------------------------
	.byte	W06
	.byte		N18   , En5 , v104
	.byte	W90
@ 065   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_028
@ 066   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_029
@ 067   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_3_030
@ 068   ----------------------------------------
	.byte	W06
	.byte		N18   , En5 , v104
	.byte	W42
	.byte		N24   , Dn5 
	.byte	W24
	.byte		        Cs5 
	.byte	W24
@ 069   ----------------------------------------
	.byte		TIE   , Bn4 
	.byte	W96
@ 070   ----------------------------------------
	.byte	W96
@ 071   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 072   ----------------------------------------
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

mus_despacito_4:
	.byte	KEYSH , mus_despacito_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 24
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_despacito_mvl/mxv
	.byte		MOD   , 0
	.byte		BEND  , c_v+0
	.byte	W18
	.byte		N18   , Fs3 , v104
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W30
@ 001   ----------------------------------------
	.byte		N12   , Gn3 
	.byte	W48
	.byte		N18   
	.byte	W48
@ 002   ----------------------------------------
	.byte		N12   , Fs3 
	.byte	W48
	.byte		N12   
	.byte	W48
@ 003   ----------------------------------------
	.byte		        En3 
	.byte	W42
	.byte		N12   
	.byte	W24
	.byte		        En3 , v092
	.byte	W30
@ 004   ----------------------------------------
mus_despacito_4_004:
	.byte	W12
	.byte		N06   , Fs3 , v092
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 005   ----------------------------------------
mus_despacito_4_005:
	.byte	W12
	.byte		N06   , Gn3 , v092
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 007   ----------------------------------------
mus_despacito_4_007:
	.byte	W12
	.byte		N06   , En3 , v092
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_005
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 011   ----------------------------------------
mus_despacito_4_011:
	.byte	W12
	.byte		N06   , En3 , v092
	.byte	W24
	.byte		N06   
	.byte	W60
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_005
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_007
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_005
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_011
@ 020   ----------------------------------------
mus_despacito_4_020:
	.byte	W06
	.byte		N12   , Fs3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 021   ----------------------------------------
mus_despacito_4_021:
	.byte	W06
	.byte		N12   , Gn3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 023   ----------------------------------------
mus_despacito_4_023:
	.byte	W06
	.byte		N12   , En3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W18
	.byte		N12   
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_021
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 027   ----------------------------------------
mus_despacito_4_027:
	.byte	W06
	.byte		N12   , En3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W60
	.byte	PEND
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_021
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_023
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_021
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_027
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_005
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_007
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 041   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_005
@ 042   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 043   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_011
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 045   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_005
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_007
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_005
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_004
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_011
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 054   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_021
@ 055   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 056   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_023
@ 057   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 058   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_021
@ 059   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 060   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_027
@ 061   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 062   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_021
@ 063   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 064   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_023
@ 065   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 066   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_021
@ 067   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_4_020
@ 068   ----------------------------------------
	.byte	W06
	.byte		N12   , En3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W12
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

mus_despacito_5:
	.byte	KEYSH , mus_despacito_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 24
	.byte		PAN   , c_v+0
	.byte		VOL   , 100*mus_despacito_mvl/mxv
	.byte		MOD   , 0
	.byte		BEND  , c_v+0
	.byte	W12
	.byte		N06   , Dn3 , v104
	.byte	W24
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W18
@ 001   ----------------------------------------
mus_despacito_5_001:
	.byte	W12
	.byte		N06   , Dn3 , v104
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 002   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_001
@ 003   ----------------------------------------
	.byte	W12
	.byte		N06   , Cs3 , v104
	.byte	W24
	.byte		N06   
	.byte	W54
	.byte		N12   , Dn3 , v092
	.byte	W06
@ 004   ----------------------------------------
mus_despacito_5_004:
	.byte	W12
	.byte		N06   , Dn3 , v092
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 005   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 006   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 007   ----------------------------------------
mus_despacito_5_007:
	.byte	W12
	.byte		N06   , Cs3 , v092
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W24
	.byte		N06   
	.byte	W12
	.byte	PEND
@ 008   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 010   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 011   ----------------------------------------
mus_despacito_5_011:
	.byte	W12
	.byte		N06   , Cs3 , v092
	.byte	W24
	.byte		N06   
	.byte	W60
	.byte	PEND
@ 012   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 013   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 014   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 015   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_007
@ 016   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 017   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 018   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 019   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_011
@ 020   ----------------------------------------
mus_despacito_5_020:
	.byte	W06
	.byte		N12   , Dn3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W24
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 021   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 022   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 023   ----------------------------------------
mus_despacito_5_023:
	.byte	W06
	.byte		N12   , Cs3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W18
	.byte		N12   
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W12
	.byte	PEND
@ 024   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 025   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 026   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 027   ----------------------------------------
mus_despacito_5_027:
	.byte	W06
	.byte		N12   , Cs3 , v092
	.byte	W12
	.byte		N06   
	.byte	W18
	.byte		N12   
	.byte	W60
	.byte	PEND
@ 028   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 029   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 030   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 031   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_023
@ 032   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 033   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 034   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 035   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_027
@ 036   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 037   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 038   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 039   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_007
@ 040   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 041   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 042   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 043   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_011
@ 044   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 045   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 046   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 047   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_007
@ 048   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 049   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 050   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_004
@ 051   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_011
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 054   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 055   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 056   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_023
@ 057   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 058   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 059   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 060   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_027
@ 061   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 062   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 063   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 064   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_023
@ 065   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 066   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 067   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_020
@ 068   ----------------------------------------
	.byte	PATT
	 .word	mus_despacito_5_027
@ 069   ----------------------------------------
	.byte		TIE   , Bn2 , v092
	.byte	W96
@ 070   ----------------------------------------
	.byte	W96
@ 071   ----------------------------------------
	.byte	W96
	.byte		EOT   
@ 072   ----------------------------------------
	.byte	FINE

@******************************************************@
	.align	2

mus_despacito:
	.byte	5	@ NumTrks
	.byte	0	@ NumBlks
	.byte	mus_despacito_pri	@ Priority
	.byte	mus_despacito_rev	@ Reverb.

	.word	mus_despacito_grp

	.word	mus_despacito_1
	.word	mus_despacito_2
	.word	mus_despacito_3
	.word	mus_despacito_4
	.word	mus_despacito_5

	.end
