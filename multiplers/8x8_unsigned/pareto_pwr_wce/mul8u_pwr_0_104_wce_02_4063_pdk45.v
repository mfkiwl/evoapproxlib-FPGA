/***
* This code is a part of ApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under a XXXX public license.
* When used, please cite the following article(s): V. Mrazek, R. Hrbacek, Z. Vasicek and L. Sekanina, "EvoApprox8b: Library of approximate adders and multipliers for circuit design and benchmarking of approximation methods". Design, Automation & Test in Europe Conference & Exhibition (DATE), 2017, Lausanne, 2017, pp. 258-261. doi: 10.23919/DATE.2017.7926993 
* This file is pareto optimal sub-set in the pwr and wce parameters
***/

module mul8u_pwr_0_104_wce_02_4063 (
    A,
    B,
    O
);

input [7:0] A;
input [7:0] B;
output [15:0] O;

wire sig_52,sig_53,sig_85,sig_95,sig_96,sig_127,sig_128,sig_130,sig_137,sig_138,sig_139,sig_165,sig_166,sig_170,sig_171,sig_173,sig_174,sig_180,sig_181,sig_182;
wire sig_199,sig_208,sig_209,sig_210,sig_211,sig_212,sig_213,sig_214,sig_215,sig_216,sig_217,sig_222,sig_223,sig_224,sig_225,sig_239,sig_246,sig_247,sig_248,sig_249;
wire sig_250,sig_251,sig_252,sig_253,sig_254,sig_255,sig_256,sig_257,sig_258,sig_259,sig_260,sig_263,sig_264,sig_265,sig_266,sig_267,sig_268,sig_284,sig_285,sig_286;
wire sig_287,sig_288,sig_289,sig_290,sig_291,sig_292,sig_293,sig_294,sig_295,sig_296,sig_297,sig_298,sig_299,sig_300,sig_301,sig_302,sig_303,sig_309,sig_313,sig_316;
wire sig_317,sig_318,sig_319,sig_320,sig_321,sig_322,sig_323,sig_324,sig_325,sig_326,sig_327,sig_328,sig_329,sig_330,sig_331,sig_332,sig_333,sig_334,sig_335;

assign sig_52 = B[7] & A[2]; //1 
assign sig_53 = B[7] & A[2]; //2 
assign sig_85 = A[3] & sig_52; //3 
assign sig_95 = B[6] & A[3]; //4 
assign sig_96 = B[7] & A[3]; //5 
assign sig_127 = sig_53 ^ sig_95; //6 
assign sig_128 = sig_53 & A[3]; //7 
assign sig_130 = sig_127 ^ sig_85; //8 
assign sig_137 = B[5] & A[4]; //9 
assign sig_138 = B[6] & A[4]; //10 
assign sig_139 = B[7] & A[4]; //11 
assign sig_165 = sig_130 | sig_137; //12 
assign sig_166 = sig_130 & sig_137; //13 
assign sig_170 = sig_96 ^ sig_138; //14 
assign sig_171 = sig_96 & sig_138; //15 
assign sig_173 = sig_170 ^ sig_85; //16 
assign sig_174 = sig_171 | sig_128; //17 
assign sig_180 = B[5] & A[5]; //18 
assign sig_181 = B[6] & A[5]; //19 
assign sig_182 = B[7] & A[5]; //20 
assign sig_199 = B[3] & A[6]; //21 
assign sig_208 = sig_173 ^ sig_180; //22 
assign sig_209 = sig_173 & sig_180; //23 
assign sig_210 = sig_208 & sig_166; //24 
assign sig_211 = sig_208 ^ sig_166; //25 
assign sig_212 = sig_209 | sig_210; //26 
assign sig_213 = sig_139 ^ sig_181; //27 
assign sig_214 = sig_139 & sig_181; //28 
assign sig_215 = sig_213 & sig_174; //29 
assign sig_216 = sig_213 ^ sig_174; //30 
assign sig_217 = sig_214 | sig_215; //31 
assign sig_222 = B[4] & A[6]; //32 
assign sig_223 = B[5] & A[6]; //33 
assign sig_224 = B[6] & A[6]; //34 
assign sig_225 = B[7] & A[6]; //35 
assign sig_239 = A[5] & B[4]; //36 
assign sig_246 = sig_211 ^ sig_222; //37 
assign sig_247 = sig_211 & sig_222; //38 
assign sig_248 = sig_246 & sig_165; //39 
assign sig_249 = sig_246 ^ sig_165; //40 
assign sig_250 = sig_247 | sig_248; //41 
assign sig_251 = sig_216 ^ sig_223; //42 
assign sig_252 = sig_216 & sig_223; //43 
assign sig_253 = sig_251 & sig_212; //44 
assign sig_254 = sig_251 ^ sig_212; //45 
assign sig_255 = sig_252 | sig_253; //46 
assign sig_256 = sig_182 ^ sig_224; //47 
assign sig_257 = sig_182 & sig_224; //48 
assign sig_258 = sig_256 & sig_217; //49 
assign sig_259 = sig_256 ^ sig_217; //50 
assign sig_260 = sig_257 | sig_258; //51 
assign sig_263 = B[2] & A[7]; //52 
assign sig_264 = B[3] & A[7]; //53 
assign sig_265 = B[4] & A[7]; //54 
assign sig_266 = B[5] & A[7]; //55 
assign sig_267 = B[6] & A[7]; //56 
assign sig_268 = B[7] & A[7]; //57 
assign sig_284 = sig_249 ^ sig_264; //58 
assign sig_285 = sig_249 & sig_264; //59 
assign sig_286 = sig_284 & sig_199; //60 
assign sig_287 = sig_284 ^ sig_199; //61 
assign sig_288 = sig_285 | sig_286; //62 
assign sig_289 = sig_254 ^ sig_265; //63 
assign sig_290 = sig_254 & sig_265; //64 
assign sig_291 = sig_289 & sig_250; //65 
assign sig_292 = sig_289 ^ sig_250; //66 
assign sig_293 = sig_290 | sig_291; //67 
assign sig_294 = sig_259 ^ sig_266; //68 
assign sig_295 = sig_259 & sig_266; //69 
assign sig_296 = sig_294 & sig_255; //70 
assign sig_297 = sig_294 ^ sig_255; //71 
assign sig_298 = sig_295 | sig_296; //72 
assign sig_299 = sig_225 ^ sig_267; //73 
assign sig_300 = sig_225 & sig_267; //74 
assign sig_301 = sig_299 & sig_260; //75 
assign sig_302 = sig_299 ^ sig_260; //76 
assign sig_303 = sig_300 | sig_301; //77 
assign sig_309 = sig_239 ^ sig_263; //78 
assign sig_313 = sig_239 & sig_263; //79 
assign sig_316 = sig_292 ^ sig_288; //80 
assign sig_317 = sig_292 & sig_288; //81 
assign sig_318 = sig_316 & sig_313; //82 
assign sig_319 = sig_316 ^ sig_313; //83 
assign sig_320 = sig_317 | sig_318; //84 
assign sig_321 = sig_297 ^ sig_293; //85 
assign sig_322 = sig_297 & sig_293; //86 
assign sig_323 = sig_321 & sig_320; //87 
assign sig_324 = sig_321 ^ sig_320; //88 
assign sig_325 = sig_322 | sig_323; //89 
assign sig_326 = sig_302 ^ sig_298; //90 
assign sig_327 = sig_302 & sig_298; //91 
assign sig_328 = sig_326 & sig_325; //92 
assign sig_329 = sig_326 ^ sig_325; //93 
assign sig_330 = sig_327 | sig_328; //94 
assign sig_331 = sig_268 ^ sig_303; //95 
assign sig_332 = A[7] & sig_303; //96 
assign sig_333 = sig_268 & sig_330; //97 
assign sig_334 = sig_331 ^ sig_330; //98 
assign sig_335 = sig_332 | sig_333; //99 

assign O[15] = sig_335;
assign O[14] = sig_334;
assign O[13] = sig_329;
assign O[12] = sig_324;
assign O[11] = sig_319;
assign O[10] = sig_287;
assign O[9] = sig_309;
assign O[8] = sig_309;
assign O[7] = sig_214;
assign O[6] = sig_254;
assign O[5] = sig_225;
assign O[4] = sig_127;
assign O[3] = 1'b0;
assign O[2] = sig_309;
assign O[1] = sig_291;
assign O[0] = sig_217;

endmodule



// internal reference: cgp-approx14zr.08.mul8u_pwr_0_104_wce_02_4063
