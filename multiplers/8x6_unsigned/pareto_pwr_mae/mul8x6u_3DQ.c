/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, L. Sekanina, Z. Vasicek "Libraries of Approximate Circuits: Automated Design and Application in CNN Accelerators" IEEE Journal on Emerging and Selected Topics in Circuits and Systems, Vol 10, No 4, 2020 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and mae parameters
***/
// MAE% = 0.07 %
// MAE = 11 
// WCE% = 0.29 %
// WCE = 47 
// WCRE% = 100.00 %
// EP% = 86.56 %
// MRE% = 1.70 %
// MSE = 219 
// PDK45_PWR = 0.209 mW
// PDK45_AREA = 417.2 um2
// PDK45_DELAY = 1.28 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul8x6u_3DQ(const uint64_t A,const uint64_t B)
{
   uint64_t dout_14, dout_18, dout_19, dout_21, dout_26, dout_27, dout_28, dout_29, dout_42, dout_47, dout_48, dout_49, dout_50, dout_51, dout_52, dout_53, dout_54, dout_55, dout_56, dout_57, dout_58, dout_59, dout_60, dout_61, dout_62, dout_63, dout_64, dout_66, dout_68, dout_69, dout_70, dout_71, dout_75, dout_79, dout_82, dout_84, dout_85, dout_87, dout_88, dout_89, dout_90, dout_91, dout_92, dout_93, dout_94, dout_95, dout_96, dout_97, dout_98, dout_99, dout_100, dout_101, dout_102, dout_103, dout_104, dout_105, dout_106, dout_107, dout_108, dout_110, dout_111, dout_112, dout_113, dout_114, dout_115, dout_116, dout_119, dout_120, dout_124, dout_125, dout_126, dout_127, dout_128, dout_129, dout_130, dout_131, dout_132, dout_133, dout_134, dout_135, dout_136, dout_137, dout_138, dout_139, dout_140, dout_141, dout_142, dout_143, dout_144, dout_145, dout_146, dout_147, dout_148, dout_149, dout_150, dout_151, dout_152, dout_153, dout_155, dout_156, dout_157, dout_158, dout_159, dout_160, dout_161, dout_164, dout_165, dout_169, dout_170, dout_171, dout_172, dout_173, dout_174, dout_175, dout_176, dout_177, dout_178, dout_179, dout_180, dout_181, dout_182, dout_183, dout_184, dout_185, dout_186, dout_187, dout_188, dout_189, dout_190, dout_191, dout_192, dout_193, dout_194, dout_195, dout_196, dout_197, dout_198, dout_199, dout_200, dout_201, dout_202, dout_203, dout_204, dout_205, dout_206, dout_207, dout_208, dout_209, dout_210, dout_211, dout_212, dout_213, dout_214, dout_215, dout_216, dout_217, dout_218, dout_219, dout_220, dout_221, dout_222, dout_223, dout_224, dout_225, dout_226, dout_227, dout_228, dout_229, dout_230, dout_231, dout_232, dout_233, dout_234, dout_235, dout_236, dout_237, dout_238, dout_239, dout_240, dout_241, dout_242, dout_243;
   uint64_t O;

   dout_14=((B >> 0)&1)&((A >> 6)&1);
   dout_18=((A >> 4)&1)&((B >> 0)&1);
   dout_19=((A >> 5)&1)&((B >> 0)&1);
   dout_21=((A >> 7)&1)&((B >> 0)&1);
   dout_26=((A >> 4)&1)&((B >> 1)&1);
   dout_27=((A >> 5)&1)&((B >> 1)&1);
   dout_28=((A >> 6)&1)&((B >> 1)&1);
   dout_29=((A >> 7)&1)&((B >> 1)&1);
   dout_42=((B >> 1)&1)&((A >> 3)&1);
   dout_47=dout_19^dout_26;
   dout_48=((B >> 1)&1)&dout_18;
   dout_49=((A >> 5)&1)&dout_18;
   dout_50=dout_47^dout_18;
   dout_51=dout_48|dout_49;
   dout_52=dout_14^dout_27;
   dout_53=dout_14&dout_27;
   dout_54=dout_52&dout_51;
   dout_55=dout_52^dout_51;
   dout_56=dout_53|dout_54;
   dout_57=dout_21^dout_28;
   dout_58=dout_21&dout_28;
   dout_59=dout_57&dout_56;
   dout_60=dout_57^dout_56;
   dout_61=dout_58|dout_59;
   dout_62=dout_61&dout_29;
   dout_63=dout_61^dout_29;
   dout_64=((A >> 3)&1)&((B >> 2)&1);
   dout_66=((A >> 2)&1)&((B >> 2)&1);
   dout_68=((A >> 4)&1)&((B >> 2)&1);
   dout_69=((A >> 5)&1)&((B >> 2)&1);
   dout_70=((A >> 6)&1)&((B >> 2)&1);
   dout_71=((A >> 7)&1)&((B >> 2)&1);
   dout_75=((B >> 2)&1)&dout_42;
   dout_79=dout_42^dout_66;
   dout_82=dout_79^dout_75;
   dout_84=dout_50^dout_64;
   dout_85=dout_50&dout_64;
   dout_87=dout_84^dout_75;
   dout_88=dout_85|dout_75;
   dout_89=dout_55^dout_68;
   dout_90=dout_55&dout_68;
   dout_91=dout_89&dout_88;
   dout_92=dout_89^dout_88;
   dout_93=dout_90|dout_91;
   dout_94=dout_60^dout_69;
   dout_95=dout_60&dout_69;
   dout_96=dout_94&dout_93;
   dout_97=dout_94^dout_93;
   dout_98=dout_95|dout_96;
   dout_99=dout_63^dout_70;
   dout_100=dout_63&dout_70;
   dout_101=dout_99&dout_98;
   dout_102=dout_99^dout_98;
   dout_103=dout_100|dout_101;
   dout_104=dout_62^dout_71;
   dout_105=dout_61&dout_71;
   dout_106=dout_104&dout_103;
   dout_107=dout_104^dout_103;
   dout_108=dout_105|dout_106;
   dout_110=((A >> 0)&1)&((B >> 3)&1);
   dout_111=((A >> 2)&1)&((B >> 3)&1);
   dout_112=((A >> 3)&1)&((B >> 3)&1);
   dout_113=((A >> 4)&1)&((B >> 3)&1);
   dout_114=((A >> 5)&1)&((B >> 3)&1);
   dout_115=((A >> 6)&1)&((B >> 3)&1);
   dout_116=((A >> 7)&1)&((B >> 3)&1);
   dout_119=dout_82|dout_110;
   dout_120=dout_82&dout_110;
   dout_124=dout_87^dout_111;
   dout_125=dout_87&dout_111;
   dout_126=dout_124&dout_120;
   dout_127=dout_124^dout_120;
   dout_128=dout_125|dout_126;
   dout_129=dout_92^dout_112;
   dout_130=dout_92&dout_112;
   dout_131=dout_129&dout_128;
   dout_132=dout_129^dout_128;
   dout_133=dout_130|dout_131;
   dout_134=dout_97^dout_113;
   dout_135=dout_97&dout_113;
   dout_136=dout_134&dout_133;
   dout_137=dout_134^dout_133;
   dout_138=dout_135|dout_136;
   dout_139=dout_102^dout_114;
   dout_140=dout_102&dout_114;
   dout_141=dout_139&dout_138;
   dout_142=dout_139^dout_138;
   dout_143=dout_140|dout_141;
   dout_144=dout_107^dout_115;
   dout_145=dout_107&dout_115;
   dout_146=dout_144&dout_143;
   dout_147=dout_144^dout_143;
   dout_148=dout_145|dout_146;
   dout_149=dout_108^dout_116;
   dout_150=dout_108&((B >> 3)&1);
   dout_151=dout_116&dout_148;
   dout_152=dout_149^dout_148;
   dout_153=dout_150|dout_151;
   dout_155=((A >> 1)&1)&((B >> 4)&1);
   dout_156=((A >> 2)&1)&((B >> 4)&1);
   dout_157=((A >> 3)&1)&((B >> 4)&1);
   dout_158=((A >> 4)&1)&((B >> 4)&1);
   dout_159=((A >> 5)&1)&((B >> 4)&1);
   dout_160=((A >> 6)&1)&((B >> 4)&1);
   dout_161=((A >> 7)&1)&((B >> 4)&1);
   dout_164=dout_127|dout_155;
   dout_165=dout_127&dout_155;
   dout_169=dout_132^dout_156;
   dout_170=dout_132&dout_156;
   dout_171=dout_169&dout_165;
   dout_172=dout_169^dout_165;
   dout_173=dout_170|dout_171;
   dout_174=dout_137^dout_157;
   dout_175=dout_137&dout_157;
   dout_176=dout_174&dout_173;
   dout_177=dout_174^dout_173;
   dout_178=dout_175|dout_176;
   dout_179=dout_142^dout_158;
   dout_180=dout_142&dout_158;
   dout_181=dout_179&dout_178;
   dout_182=dout_179^dout_178;
   dout_183=dout_180|dout_181;
   dout_184=dout_147^dout_159;
   dout_185=dout_147&dout_159;
   dout_186=dout_184&dout_183;
   dout_187=dout_184^dout_183;
   dout_188=dout_185|dout_186;
   dout_189=dout_152^dout_160;
   dout_190=dout_152&dout_160;
   dout_191=dout_189&dout_188;
   dout_192=dout_189^dout_188;
   dout_193=dout_190|dout_191;
   dout_194=dout_153^dout_161;
   dout_195=dout_153&dout_161;
   dout_196=dout_194&dout_193;
   dout_197=dout_194^dout_193;
   dout_198=dout_195|dout_196;
   dout_199=((A >> 0)&1)&((B >> 5)&1);
   dout_200=((A >> 1)&1)&((B >> 5)&1);
   dout_201=((A >> 2)&1)&((B >> 5)&1);
   dout_202=((A >> 3)&1)&((B >> 5)&1);
   dout_203=((A >> 4)&1)&((B >> 5)&1);
   dout_204=((A >> 5)&1)&((B >> 5)&1);
   dout_205=((A >> 6)&1)&((B >> 5)&1);
   dout_206=((A >> 7)&1)&((B >> 5)&1);
   dout_207=dout_164&dout_199;
   dout_208=dout_164^dout_199;
   dout_209=dout_172^dout_200;
   dout_210=dout_172&dout_200;
   dout_211=dout_209&dout_207;
   dout_212=dout_209^dout_207;
   dout_213=dout_210|dout_211;
   dout_214=dout_177^dout_201;
   dout_215=dout_177&dout_201;
   dout_216=dout_214&dout_213;
   dout_217=dout_214^dout_213;
   dout_218=dout_215|dout_216;
   dout_219=dout_182^dout_202;
   dout_220=dout_182&dout_202;
   dout_221=dout_219&dout_218;
   dout_222=dout_219^dout_218;
   dout_223=dout_220|dout_221;
   dout_224=dout_187^dout_203;
   dout_225=dout_187&dout_203;
   dout_226=dout_224&dout_223;
   dout_227=dout_224^dout_223;
   dout_228=dout_225|dout_226;
   dout_229=dout_192^dout_204;
   dout_230=dout_192&dout_204;
   dout_231=dout_229&dout_228;
   dout_232=dout_229^dout_228;
   dout_233=dout_230|dout_231;
   dout_234=dout_197^dout_205;
   dout_235=dout_197&dout_205;
   dout_236=dout_234&dout_233;
   dout_237=dout_234^dout_233;
   dout_238=dout_235|dout_236;
   dout_239=dout_198^dout_206;
   dout_240=dout_198&((B >> 5)&1);
   dout_241=((A >> 7)&1)&dout_238;
   dout_242=dout_239^dout_238;
   dout_243=dout_240|dout_241;

   O = 0;
   O |= (dout_14&1) << 0;
   O |= (0&1) << 1;
   O |= (dout_207&1) << 2;
   O |= (dout_82&1) << 3;
   O |= (dout_119&1) << 4;
   O |= (dout_208&1) << 5;
   O |= (dout_212&1) << 6;
   O |= (dout_217&1) << 7;
   O |= (dout_222&1) << 8;
   O |= (dout_227&1) << 9;
   O |= (dout_232&1) << 10;
   O |= (dout_237&1) << 11;
   O |= (dout_242&1) << 12;
   O |= (dout_243&1) << 13;
   return O;
}
