
/*
    Copyright (C) 1999-2005 by Mark D. Hill and David A. Wood for the
    Wisconsin Multifacet Project.  Contact: gems@cs.wisc.edu
    http://www.cs.wisc.edu/gems/

    --------------------------------------------------------------------

    This file is part of the Opal Timing-First Microarchitectural
    Simulator, a component of the Multifacet GEMS (General 
    Execution-driven Multiprocessor Simulator) software toolset 
    originally developed at the University of Wisconsin-Madison.

    Opal was originally developed by Carl Mauer based upon code by
    Craig Zilles.

    Substantial further development of Multifacet GEMS at the
    University of Wisconsin was performed by Alaa Alameldeen, Brad
    Beckmann, Jayaram Bobba, Ross Dickson, Dan Gibson, Pacia Harper,
    Milo Martin, Michael Marty, Carl Mauer, Michelle Moravan,
    Kevin Moore, Manoj Plakal, Daniel Sorin, Min Xu, and Luke Yen.

    --------------------------------------------------------------------

    If your use of this software contributes to a published paper, we
    request that you (1) cite our summary paper that appears on our
    website (http://www.cs.wisc.edu/gems/) and (2) e-mail a citation
    for your published paper to gems@cs.wisc.edu.

    If you redistribute derivatives of this software, we request that
    you notify us and either (1) ask people to register with us at our
    website (http://www.cs.wisc.edu/gems/) or (2) collect registration
    information and periodically send it to us.

    --------------------------------------------------------------------

    Multifacet GEMS is free software; you can redistribute it and/or
    modify it under the terms of version 2 of the GNU General Public
    License as published by the Free Software Foundation.

    Multifacet GEMS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with the Multifacet GEMS; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
    02111-1307, USA

    The GNU General Public License is contained in the file LICENSE.

### END HEADER ###
*/
#ifndef _OPCODE_H_
#define _OPCODE_H_

/*------------------------------------------------------------------------*/
/* Macro declarations                                                     */
/*------------------------------------------------------------------------*/

/// i_opcode: one opcode for each decoded sparc instruction
enum i_opcode {
  i_add = 0,
  i_addcc,
  i_addc,
  i_addccc,
  i_and,
  i_andcc,
  i_andn,
  i_andncc,
  i_fba,
  i_ba,
  i_fbpa,
  i_bpa,
  i_fbn,
  i_fbpn,
  i_bn,
  i_bpn,
  i_bpne,
  i_bpe,
  i_bpg,
  i_bple,
  i_bpge,
  i_bpl,
  i_bpgu,
  i_bpleu,
  i_bpcc,
  i_bpcs,
  i_bppos,
  i_bpneg,
  i_bpvc,
  i_bpvs,
  i_call,
  i_casa,
  i_casxa,
  i_done,
  i_jmpl,
  i_fabss,
  i_fabsd,
  i_fabsq,
  i_fadds,
  i_faddd,
  i_faddq,
  i_fsubs,
  i_fsubd,
  i_fsubq,
  i_fcmps,
  i_fcmpd,
  i_fcmpq,
  i_fcmpes,
  i_fcmped,
  i_fcmpeq,
  i_fmovs,
  i_fmovd,
  i_fmovq,
  i_fnegs,
  i_fnegd,
  i_fnegq,
  i_fmuls,
  i_fmuld,
  i_fmulq,
  i_fdivs,
  i_fdivd,
  i_fdivq,
  i_fsmuld,
  i_fdmulq,
  i_fsqrts,
  i_fsqrtd,
  i_fsqrtq,
  i_retrn,
  i_brz,
  i_brlez,
  i_brlz,
  i_brnz,
  i_brgz,
  i_brgez,
  i_fbu,
  i_fbg,
  i_fbug,
  i_fbl,
  i_fbul,
  i_fblg,
  i_fbne,
  i_fbe,
  i_fbue,
  i_fbge,
  i_fbuge,
  i_fble,
  i_fbule,
  i_fbo,
  i_fbpu,
  i_fbpg,
  i_fbpug,
  i_fbpl,
  i_fbpul,
  i_fbplg,
  i_fbpne,
  i_fbpe,
  i_fbpue,
  i_fbpge,
  i_fbpuge,
  i_fbple,
  i_fbpule,
  i_fbpo,
  i_bne,
  i_be,
  i_bg,
  i_ble,
  i_bge,
  i_bl,
  i_bgu,
  i_bleu,
  i_bcc,
  i_bcs,
  i_bpos,
  i_bneg,
  i_bvc,
  i_bvs,
  i_fstox,
  i_fdtox,
  i_fqtox,
  i_fstoi,
  i_fdtoi,
  i_fqtoi,
  i_fstod,
  i_fstoq,
  i_fdtos,
  i_fdtoq,
  i_fqtos,
  i_fqtod,
  i_fxtos,
  i_fxtod,
  i_fxtoq,
  i_fitos,
  i_fitod,
  i_fitoq,
  i_fmovfsn,
  i_fmovfsne,
  i_fmovfslg,
  i_fmovfsul,
  i_fmovfsl,
  i_fmovfsug,
  i_fmovfsg,
  i_fmovfsu,
  i_fmovfsa,
  i_fmovfse,
  i_fmovfsue,
  i_fmovfsge,
  i_fmovfsuge,
  i_fmovfsle,
  i_fmovfsule,
  i_fmovfso,
  i_fmovfdn,
  i_fmovfdne,
  i_fmovfdlg,
  i_fmovfdul,
  i_fmovfdl,
  i_fmovfdug,
  i_fmovfdg,
  i_fmovfdu,
  i_fmovfda,
  i_fmovfde,
  i_fmovfdue,
  i_fmovfdge,
  i_fmovfduge,
  i_fmovfdle,
  i_fmovfdule,
  i_fmovfdo,
  i_fmovfqn,
  i_fmovfqne,
  i_fmovfqlg,
  i_fmovfqul,
  i_fmovfql,
  i_fmovfqug,
  i_fmovfqg,
  i_fmovfqu,
  i_fmovfqa,
  i_fmovfqe,
  i_fmovfque,
  i_fmovfqge,
  i_fmovfquge,
  i_fmovfqle,
  i_fmovfqule,
  i_fmovfqo,
  i_fmovsn,
  i_fmovse,
  i_fmovsle,
  i_fmovsl,
  i_fmovsleu,
  i_fmovscs,
  i_fmovsneg,
  i_fmovsvs,
  i_fmovsa,
  i_fmovsne,
  i_fmovsg,
  i_fmovsge,
  i_fmovsgu,
  i_fmovscc,
  i_fmovspos,
  i_fmovsvc,
  i_fmovdn,
  i_fmovde,
  i_fmovdle,
  i_fmovdl,
  i_fmovdleu,
  i_fmovdcs,
  i_fmovdneg,
  i_fmovdvs,
  i_fmovda,
  i_fmovdne,
  i_fmovdg,
  i_fmovdge,
  i_fmovdgu,
  i_fmovdcc,
  i_fmovdpos,
  i_fmovdvc,
  i_fmovqn,
  i_fmovqe,
  i_fmovqle,
  i_fmovql,
  i_fmovqleu,
  i_fmovqcs,
  i_fmovqneg,
  i_fmovqvs,
  i_fmovqa,
  i_fmovqne,
  i_fmovqg,
  i_fmovqge,
  i_fmovqgu,
  i_fmovqcc,
  i_fmovqpos,
  i_fmovqvc,
  i_fmovrsz,
  i_fmovrslez,
  i_fmovrslz,
  i_fmovrsnz,
  i_fmovrsgz,
  i_fmovrsgez,
  i_fmovrdz,
  i_fmovrdlez,
  i_fmovrdlz,
  i_fmovrdnz,
  i_fmovrdgz,
  i_fmovrdgez,
  i_fmovrqz,
  i_fmovrqlez,
  i_fmovrqlz,
  i_fmovrqnz,
  i_fmovrqgz,
  i_fmovrqgez,
  i_mova,
  i_movfa,
  i_movn,
  i_movfn,
  i_movne,
  i_move,
  i_movg,
  i_movle,
  i_movge,
  i_movl,
  i_movgu,
  i_movleu,
  i_movcc,
  i_movcs,
  i_movpos,
  i_movneg,
  i_movvc,
  i_movvs,
  i_movfu,
  i_movfg,
  i_movfug,
  i_movfl,
  i_movful,
  i_movflg,
  i_movfne,
  i_movfe,
  i_movfue,
  i_movfge,
  i_movfuge,
  i_movfle,
  i_movfule,
  i_movfo,
  i_movrz,
  i_movrlez,
  i_movrlz,
  i_movrnz,
  i_movrgz,
  i_movrgez,
  i_ta,
  i_tn,
  i_tne,
  i_te,
  i_tg,
  i_tle,
  i_tge,
  i_tl,
  i_tgu,
  i_tleu,
  i_tcc,
  i_tcs,
  i_tpos,
  i_tneg,
  i_tvc,
  i_tvs,
  i_sub,
  i_subcc,
  i_subc,
  i_subccc,
  i_or,
  i_orcc,
  i_orn,
  i_orncc,
  i_xor,
  i_xorcc,
  i_xnor,
  i_xnorcc,
  i_mulx,
  i_sdivx,
  i_udivx,
  i_sll,
  i_srl,
  i_sra,
  i_sllx,
  i_srlx,
  i_srax,
  i_taddcc,
  i_taddcctv,
  i_tsubcc,
  i_tsubcctv,
  i_udiv,
  i_sdiv,
  i_umul,
  i_smul,
  i_udivcc,
  i_sdivcc,
  i_umulcc,
  i_smulcc,
  i_mulscc,
  i_popc,
  i_flush,
  i_flushw,
  i_rd,
  i_rdcc,
  i_wr,
  i_wrcc,
  i_save,
  i_restore,
  i_saved,
  i_restored,
  i_sethi,
  i_ldf,
  i_lddf,
  i_ldqf,
  i_ldfa,
  i_lddfa,
  i_ldblk,
  i_ldqfa,
  i_ldsb,
  i_ldsh,
  i_ldsw,
  i_ldub,
  i_lduh,
  i_lduw,
  i_ldx,
  i_ldd,
  i_ldsba,
  i_ldsha,
  i_ldswa,
  i_lduba,
  i_lduha,
  i_lduwa,
  i_ldxa,
  i_ldda,
  i_ldqa,
  i_stf,
  i_stdf,
  i_stqf,
  i_stb,
  i_sth,
  i_stw,
  i_stx,
  i_std,
  i_stfa,
  i_stdfa,
  i_stblk,
  i_stqfa,
  i_stba,
  i_stha,
  i_stwa,
  i_stxa,
  i_stda,
  i_ldstub,
  i_ldstuba,
  i_prefetch,
  i_prefetcha,
  i_swap,
  i_swapa,
  i_ldfsr,
  i_ldxfsr,
  i_stfsr,
  i_stxfsr,
  i__trap,  /* ?? not a real instr */
  i_impdep1,
  i_impdep2,
  i_membar,
  i_stbar,
  i_cmp,
  i_jmp,
  i_mov,
  i_nop,
  i_not,
  i_rdpr,
  i_wrpr,
  i_faligndata,
  i_alignaddr, i_alignaddrl,
  i_fzero, i_fzeros,
  i_fnor, i_fnors,
  i_fandnot2, i_fandnot2s,
  i_fnot2, i_fnot2s,
  i_fandnot1, i_fandnot1s,
  i_fnot1, i_fnot1s,
  i_fxor, i_fxors,
  i_fnand, i_fnands,
  i_fone, i_fones,
  i_fand, i_fands,
  i_fnxor, i_fnxors,
  i_fsrc1, i_fsrc1s,
  i_fornot2, i_fornot2s,
  i_fsrc2, i_fsrc2s,
  i_fornot1, i_fornot1s,
  i_for, i_fors,
  i_retry,
  i_fcmple16,
  i_fcmpne16,
  i_fcmple32,
  i_fcmpne32,
  i_fcmpgt16,
  i_fcmpeq16,
  i_fcmpgt32,
  i_fcmpeq32,
  i_bshuffle,
  i_bmask,
  i_edge8,
  i_edge8n,
  i_edge8l,
  i_edge8ln,
  i_edge16,
  i_edge16n,
  i_edge16l,
  i_edge16ln,
  i_edge32,
  i_edge32n,
  i_edge32l,
  i_edge32ln,
  i_array8,
  i_array16,
  i_array32,
  i_fpadd16,
  i_fpadd16s,
  i_fpadd32,
  i_fpadd32s,
  i_fpsub16,
  i_fpsub16s,
  i_fpsub32,
  i_fpsub32s,
  i_fmul8x16,
  i_fmul8x16au,
  i_fmul8x16al,
  i_fmul8sux16,
  i_fmul8ulx16,
  i_fmuld8sux16,
  i_fmuld8ulx16,
  i_fpack32,
  i_fpack16,
  i_fpackfix,
  i_pdist,
  i_fpmerge,
  i_fexpand,
  i_shutdown,
  i_siam,
  i_mop,
  i_ill,
  i_maxcount
};

/*------------------------------------------------------------------------*/
/* Global variables                                                       */
/*------------------------------------------------------------------------*/

/// A table indicating verbose output for each instruction
extern bool g_dynamic_debug_table[i_maxcount];

/*------------------------------------------------------------------------*/
/* Global functions                                                       */
/*------------------------------------------------------------------------*/

/**
 * converts an enumerated opcode into a character string
 * 
 * @param op The op code to convert into a string
 * @return char *: The decoded op code character string
 */
extern const char *decode_opcode( enum i_opcode op );
extern const char *decode_opcode( uint16 op );

#endif  /* _OPCODE_H_ */
