// 
// Copyright (C) 2003 Virtual Silicon Technology Inc. All Rights Reserved.
// Silicon Ready, The Heart of Great Silicon, and the Virtual Silicon
// logo are registered trademarks of Virtual Silicon Technology Inc.  All
// other trademarks are the property of their respective owner.
// 
// Virtual Silicon Technology Inc.
// 1322 Orleans Drive
// Sunnyvale, CA 94089-1116
// Phone : (408) 548-2700
// Fax   : (408) 548-2750
// Web Site : http://www.virtual-silicon.com
// 
// File Name:       HDOAI222D4.v
// Library Name:    umce13h210t3
// Library Release: 1.2
// Product:         High Density Standard Cells
// Process:         UMC L130E-HS-FSG
// Generated:       07/16/2003 15:29:35
// ------------------------------------------------------------------------
//  
// $RCSfile: HDOAI222D4.v,v $ 
// $Source: /syncdisk/rcs/common/verilog/5.1.4.3/sc/RCS/HDOAI222D4.v,v $ 
// $Date: 2003/04/23 22:40:14 $ 
// $Revision: 1.2 $ 
//  
// ---------------------- 
// Verilog dump Timing Insertion Version 1.5

// Verilog dump veralc Version 1.9
/*****************************************************************************/
/*                                                                           */
/*  CellRater, version CR-4.9.2.1 production                                 */
/*  Created:  Wed Dec 04 13:50:25 2002 by dharman                            */
/*    for Verilog Simulator:  verilog-xl                                     */
/*                                                                           */
/*****************************************************************************/
`timescale 1 ns / 1 ps
`define VCC 1'b1
`define VSS 0
`celldefine
`suppress_faults
`enable_portfaults
module HDOAI222D4(Z, A1, A2, B1, B2, C1, C2);
input A1;
input A2;
input B1;
input B2;
input C1;
input C2;
output Z;
 HDOAI222D4_UDPZ(Z, A1, A2, B1, B2, C1, C2);
specify
// arc A1 --> Z
  ( A1 => Z ) = (1,1);
// arc A2 --> Z
  ( A2 => Z ) = (1,1);
// arc B1 --> Z
  ( B1 => Z ) = (1,1);
// arc B2 --> Z
  ( B2 => Z ) = (1,1);
// arc C1 --> Z
  ( C1 => Z ) = (1,1);
// arc C2 --> Z
  ( C2 => Z ) = (1,1);
endspecify
endmodule // HDOAI222D4 //

primitive HDOAI222D4_UDPZ(Z, A1, A2, B1, B2, C1, C2);
output Z;
input A1;
input A2;
input B1;
input B2;
input C1;
input C2;

table
// A1  A2  B1  B2  C1  C2 Z
   ?    ?    0    0    ?    ?   : 1   ;
   ?    ?    ?    ?    0    0   : 1   ;
   0    0    ?    ?    ?    ?   : 1   ;
   ?    1    ?    1    ?    1   : 0   ;
   ?    1    ?    1    1    ?   : 0   ;
   1    ?    1    ?    ?    1   : 0   ;
   1    ?    1    ?    1    ?   : 0   ;
   ?    1    1    ?    ?    1   : 0   ;
   1    ?    ?    1    1    ?   : 0   ;
   ?    1    1    ?    1    ?   : 0   ;
   1    ?    ?    1    ?    1   : 0   ;
endtable
endprimitive
`disable_portfaults
`nosuppress_faults
`endcelldefine
