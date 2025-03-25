// HlslIntrinsicOp.h - Generated by hctgen.py
// DO NOT MODIFY!!!
// Changes to this code are made in gen_intrin_main.txt

#pragma once
namespace hlsl {
enum class IntrinsicOp {
  IOP_AcceptHitAndEndSearch = 0,
  IOP_AddUint64 = 1,
  IOP_AllMemoryBarrier = 2,
  IOP_AllMemoryBarrierWithGroupSync = 3,
  IOP_AllocateRayQuery = 4,
  IOP_Barrier = 5,
  IOP_CallShader = 6,
  IOP_CheckAccessFullyMapped = 7,
  IOP_CreateResourceFromHeap = 8,
  IOP_D3DCOLORtoUBYTE4 = 9,
  IOP_DeviceMemoryBarrier = 10,
  IOP_DeviceMemoryBarrierWithGroupSync = 11,
  IOP_DispatchMesh = 12,
  IOP_DispatchRaysDimensions = 13,
  IOP_DispatchRaysIndex = 14,
  IOP_EvaluateAttributeAtSample = 15,
  IOP_EvaluateAttributeCentroid = 16,
  IOP_EvaluateAttributeSnapped = 17,
  IOP_GeometryIndex = 18,
  IOP_GetAttributeAtVertex = 19,
  IOP_GetRemainingRecursionLevels = 20,
  IOP_GetRenderTargetSampleCount = 21,
  IOP_GetRenderTargetSamplePosition = 22,
  IOP_GroupMemoryBarrier = 23,
  IOP_GroupMemoryBarrierWithGroupSync = 24,
  IOP_HitKind = 25,
  IOP_IgnoreHit = 26,
  IOP_InstanceID = 27,
  IOP_InstanceIndex = 28,
  IOP_InterlockedAdd = 29,
  IOP_InterlockedAnd = 30,
  IOP_InterlockedCompareExchange = 31,
  IOP_InterlockedCompareExchangeFloatBitwise = 32,
  IOP_InterlockedCompareStore = 33,
  IOP_InterlockedCompareStoreFloatBitwise = 34,
  IOP_InterlockedExchange = 35,
  IOP_InterlockedMax = 36,
  IOP_InterlockedMin = 37,
  IOP_InterlockedOr = 38,
  IOP_InterlockedXor = 39,
  IOP_IsHelperLane = 40,
  IOP_NonUniformResourceIndex = 41,
  IOP_ObjectRayDirection = 42,
  IOP_ObjectRayOrigin = 43,
  IOP_ObjectToWorld = 44,
  IOP_ObjectToWorld3x4 = 45,
  IOP_ObjectToWorld4x3 = 46,
  IOP_PrimitiveIndex = 47,
  IOP_Process2DQuadTessFactorsAvg = 48,
  IOP_Process2DQuadTessFactorsMax = 49,
  IOP_Process2DQuadTessFactorsMin = 50,
  IOP_ProcessIsolineTessFactors = 51,
  IOP_ProcessQuadTessFactorsAvg = 52,
  IOP_ProcessQuadTessFactorsMax = 53,
  IOP_ProcessQuadTessFactorsMin = 54,
  IOP_ProcessTriTessFactorsAvg = 55,
  IOP_ProcessTriTessFactorsMax = 56,
  IOP_ProcessTriTessFactorsMin = 57,
  IOP_QuadAll = 58,
  IOP_QuadAny = 59,
  IOP_QuadReadAcrossDiagonal = 60,
  IOP_QuadReadAcrossX = 61,
  IOP_QuadReadAcrossY = 62,
  IOP_QuadReadLaneAt = 63,
  IOP_RayFlags = 64,
  IOP_RayTCurrent = 65,
  IOP_RayTMin = 66,
  IOP_ReportHit = 67,
  IOP_SetMeshOutputCounts = 68,
  IOP_TraceRay = 69,
  IOP_WaveActiveAllEqual = 70,
  IOP_WaveActiveAllTrue = 71,
  IOP_WaveActiveAnyTrue = 72,
  IOP_WaveActiveBallot = 73,
  IOP_WaveActiveBitAnd = 74,
  IOP_WaveActiveBitOr = 75,
  IOP_WaveActiveBitXor = 76,
  IOP_WaveActiveCountBits = 77,
  IOP_WaveActiveMax = 78,
  IOP_WaveActiveMin = 79,
  IOP_WaveActiveProduct = 80,
  IOP_WaveActiveSum = 81,
  IOP_WaveGetLaneCount = 82,
  IOP_WaveGetLaneIndex = 83,
  IOP_WaveIsFirstLane = 84,
  IOP_WaveMatch = 85,
  IOP_WaveMultiPrefixBitAnd = 86,
  IOP_WaveMultiPrefixBitOr = 87,
  IOP_WaveMultiPrefixBitXor = 88,
  IOP_WaveMultiPrefixCountBits = 89,
  IOP_WaveMultiPrefixProduct = 90,
  IOP_WaveMultiPrefixSum = 91,
  IOP_WavePrefixCountBits = 92,
  IOP_WavePrefixProduct = 93,
  IOP_WavePrefixSum = 94,
  IOP_WaveReadLaneAt = 95,
  IOP_WaveReadLaneFirst = 96,
  IOP_WorldRayDirection = 97,
  IOP_WorldRayOrigin = 98,
  IOP_WorldToObject = 99,
  IOP_WorldToObject3x4 = 100,
  IOP_WorldToObject4x3 = 101,
  IOP___builtin_MatVecMul = 358,
  IOP___builtin_MatVecMulAdd = 359,
  IOP___builtin_OuterProductAccumulate = 360,
  IOP___builtin_VectorAccumulate = 361,
  IOP_abort = 102,
  IOP_abs = 103,
  IOP_acos = 104,
  IOP_all = 105,
  IOP_and = 106,
  IOP_any = 107,
  IOP_asdouble = 108,
  IOP_asfloat = 109,
  IOP_asfloat16 = 110,
  IOP_asin = 111,
  IOP_asint = 112,
  IOP_asint16 = 113,
  IOP_asuint = 114,
  IOP_asuint16 = 115,
  IOP_atan = 116,
  IOP_atan2 = 117,
  IOP_ceil = 118,
  IOP_clamp = 119,
  IOP_clip = 120,
  IOP_cos = 121,
  IOP_cosh = 122,
  IOP_countbits = 123,
  IOP_cross = 124,
  IOP_ddx = 125,
  IOP_ddx_coarse = 126,
  IOP_ddx_fine = 127,
  IOP_ddy = 128,
  IOP_ddy_coarse = 129,
  IOP_ddy_fine = 130,
  IOP_degrees = 131,
  IOP_determinant = 132,
  IOP_distance = 133,
  IOP_dot = 134,
  IOP_dot2add = 135,
  IOP_dot4add_i8packed = 136,
  IOP_dot4add_u8packed = 137,
  IOP_dst = 138,
  IOP_exp = 139,
  IOP_exp2 = 140,
  IOP_f16tof32 = 141,
  IOP_f32tof16 = 142,
  IOP_faceforward = 143,
  IOP_firstbithigh = 144,
  IOP_firstbitlow = 145,
  IOP_floor = 146,
  IOP_fma = 147,
  IOP_fmod = 148,
  IOP_frac = 149,
  IOP_frexp = 150,
  IOP_fwidth = 151,
  IOP_isfinite = 152,
  IOP_isinf = 153,
  IOP_isnan = 154,
  IOP_ldexp = 155,
  IOP_length = 156,
  IOP_lerp = 157,
  IOP_lit = 158,
  IOP_log = 159,
  IOP_log10 = 160,
  IOP_log2 = 161,
  IOP_mad = 162,
  IOP_max = 163,
  IOP_min = 164,
  IOP_modf = 165,
  IOP_msad4 = 166,
  IOP_mul = 167,
  IOP_normalize = 168,
  IOP_or = 169,
  IOP_pack_clamp_s8 = 170,
  IOP_pack_clamp_u8 = 171,
  IOP_pack_s8 = 172,
  IOP_pack_u8 = 173,
  IOP_pow = 174,
  IOP_printf = 175,
  IOP_radians = 176,
  IOP_rcp = 177,
  IOP_reflect = 178,
  IOP_refract = 179,
  IOP_reversebits = 180,
  IOP_round = 181,
  IOP_rsqrt = 182,
  IOP_saturate = 183,
  IOP_select = 184,
  IOP_sign = 185,
  IOP_sin = 186,
  IOP_sincos = 187,
  IOP_sinh = 188,
  IOP_smoothstep = 189,
  IOP_source_mark = 190,
  IOP_sqrt = 191,
  IOP_step = 192,
  IOP_tan = 193,
  IOP_tanh = 194,
  IOP_tex1D = 195,
  IOP_tex1Dbias = 196,
  IOP_tex1Dgrad = 197,
  IOP_tex1Dlod = 198,
  IOP_tex1Dproj = 199,
  IOP_tex2D = 200,
  IOP_tex2Dbias = 201,
  IOP_tex2Dgrad = 202,
  IOP_tex2Dlod = 203,
  IOP_tex2Dproj = 204,
  IOP_tex3D = 205,
  IOP_tex3Dbias = 206,
  IOP_tex3Dgrad = 207,
  IOP_tex3Dlod = 208,
  IOP_tex3Dproj = 209,
  IOP_texCUBE = 210,
  IOP_texCUBEbias = 211,
  IOP_texCUBEgrad = 212,
  IOP_texCUBElod = 213,
  IOP_texCUBEproj = 214,
  IOP_transpose = 215,
  IOP_trunc = 216,
  IOP_unpack_s8s16 = 217,
  IOP_unpack_s8s32 = 218,
  IOP_unpack_u8u16 = 219,
  IOP_unpack_u8u32 = 220,
  IOP_VkRawBufferLoad = 221,
  IOP_VkRawBufferStore = 222,
  IOP_VkReadClock = 223,
  IOP_Vkext_execution_mode = 224,
  IOP_Vkext_execution_mode_id = 225,
  MOP_Append = 226,
  MOP_RestartStrip = 227,
  MOP_CalculateLevelOfDetail = 228,
  MOP_CalculateLevelOfDetailUnclamped = 229,
  MOP_GetDimensions = 230,
  MOP_Load = 231,
  MOP_Sample = 232,
  MOP_SampleBias = 233,
  MOP_SampleCmp = 234,
  MOP_SampleCmpBias = 235,
  MOP_SampleCmpGrad = 236,
  MOP_SampleCmpLevel = 237,
  MOP_SampleCmpLevelZero = 238,
  MOP_SampleGrad = 239,
  MOP_SampleLevel = 240,
  MOP_Gather = 241,
  MOP_GatherAlpha = 242,
  MOP_GatherBlue = 243,
  MOP_GatherCmp = 244,
  MOP_GatherCmpAlpha = 245,
  MOP_GatherCmpBlue = 246,
  MOP_GatherCmpGreen = 247,
  MOP_GatherCmpRed = 248,
  MOP_GatherGreen = 249,
  MOP_GatherRaw = 250,
  MOP_GatherRed = 251,
  MOP_GetSamplePosition = 252,
  MOP_Load2 = 253,
  MOP_Load3 = 254,
  MOP_Load4 = 255,
  MOP_InterlockedAdd = 256,
  MOP_InterlockedAdd64 = 257,
  MOP_InterlockedAnd = 258,
  MOP_InterlockedAnd64 = 259,
  MOP_InterlockedCompareExchange = 260,
  MOP_InterlockedCompareExchange64 = 261,
  MOP_InterlockedCompareExchangeFloatBitwise = 262,
  MOP_InterlockedCompareStore = 263,
  MOP_InterlockedCompareStore64 = 264,
  MOP_InterlockedCompareStoreFloatBitwise = 265,
  MOP_InterlockedExchange = 266,
  MOP_InterlockedExchange64 = 267,
  MOP_InterlockedExchangeFloat = 268,
  MOP_InterlockedMax = 269,
  MOP_InterlockedMax64 = 270,
  MOP_InterlockedMin = 271,
  MOP_InterlockedMin64 = 272,
  MOP_InterlockedOr = 273,
  MOP_InterlockedOr64 = 274,
  MOP_InterlockedXor = 275,
  MOP_InterlockedXor64 = 276,
  MOP_Store = 277,
  MOP_Store2 = 278,
  MOP_Store3 = 279,
  MOP_Store4 = 280,
  MOP_DecrementCounter = 281,
  MOP_IncrementCounter = 282,
  MOP_Consume = 283,
  MOP_WriteSamplerFeedback = 284,
  MOP_WriteSamplerFeedbackBias = 285,
  MOP_WriteSamplerFeedbackGrad = 286,
  MOP_WriteSamplerFeedbackLevel = 287,
  MOP_Abort = 288,
  MOP_CandidateGeometryIndex = 289,
  MOP_CandidateInstanceContributionToHitGroupIndex = 290,
  MOP_CandidateInstanceID = 291,
  MOP_CandidateInstanceIndex = 292,
  MOP_CandidateObjectRayDirection = 293,
  MOP_CandidateObjectRayOrigin = 294,
  MOP_CandidateObjectToWorld3x4 = 295,
  MOP_CandidateObjectToWorld4x3 = 296,
  MOP_CandidatePrimitiveIndex = 297,
  MOP_CandidateProceduralPrimitiveNonOpaque = 298,
  MOP_CandidateTriangleBarycentrics = 299,
  MOP_CandidateTriangleFrontFace = 300,
  MOP_CandidateTriangleRayT = 301,
  MOP_CandidateType = 302,
  MOP_CandidateWorldToObject3x4 = 303,
  MOP_CandidateWorldToObject4x3 = 304,
  MOP_CommitNonOpaqueTriangleHit = 305,
  MOP_CommitProceduralPrimitiveHit = 306,
  MOP_CommittedGeometryIndex = 307,
  MOP_CommittedInstanceContributionToHitGroupIndex = 308,
  MOP_CommittedInstanceID = 309,
  MOP_CommittedInstanceIndex = 310,
  MOP_CommittedObjectRayDirection = 311,
  MOP_CommittedObjectRayOrigin = 312,
  MOP_CommittedObjectToWorld3x4 = 313,
  MOP_CommittedObjectToWorld4x3 = 314,
  MOP_CommittedPrimitiveIndex = 315,
  MOP_CommittedRayT = 316,
  MOP_CommittedStatus = 317,
  MOP_CommittedTriangleBarycentrics = 318,
  MOP_CommittedTriangleFrontFace = 319,
  MOP_CommittedWorldToObject3x4 = 320,
  MOP_CommittedWorldToObject4x3 = 321,
  MOP_Proceed = 322,
  MOP_RayFlags = 323,
  MOP_RayTMin = 324,
  MOP_TraceRayInline = 325,
  MOP_WorldRayDirection = 326,
  MOP_WorldRayOrigin = 327,
  MOP_Count = 328,
  MOP_FinishedCrossGroupSharing = 329,
  MOP_GetGroupNodeOutputRecords = 330,
  MOP_GetThreadNodeOutputRecords = 331,
  MOP_IsValid = 332,
  MOP_GroupIncrementOutputCount = 333,
  MOP_ThreadIncrementOutputCount = 334,
  MOP_OutputComplete = 335,
  MOP_SubpassLoad = 336,
  // unsigned
  IOP_InterlockedUMax = 337,
  IOP_InterlockedUMin = 338,
  IOP_WaveActiveUMax = 339,
  IOP_WaveActiveUMin = 340,
  IOP_WaveActiveUProduct = 341,
  IOP_WaveActiveUSum = 342,
  IOP_WaveMultiPrefixUProduct = 343,
  IOP_WaveMultiPrefixUSum = 344,
  IOP_WavePrefixUProduct = 345,
  IOP_WavePrefixUSum = 346,
  IOP_uabs = 347,
  IOP_uclamp = 348,
  IOP_udot = 349,
  IOP_ufirstbithigh = 350,
  IOP_umad = 351,
  IOP_umax = 352,
  IOP_umin = 353,
  IOP_umul = 354,
  IOP_usign = 355,
  MOP_InterlockedUMax = 356,
  MOP_InterlockedUMin = 357,
  Num_Intrinsics = 362,
};
inline bool HasUnsignedIntrinsicOpcode(IntrinsicOp opcode) {
  switch (opcode) {
  case IntrinsicOp::IOP_InterlockedMax:
  case IntrinsicOp::IOP_InterlockedMin:
  case IntrinsicOp::IOP_WaveActiveMax:
  case IntrinsicOp::IOP_WaveActiveMin:
  case IntrinsicOp::IOP_WaveActiveProduct:
  case IntrinsicOp::IOP_WaveActiveSum:
  case IntrinsicOp::IOP_WaveMultiPrefixProduct:
  case IntrinsicOp::IOP_WaveMultiPrefixSum:
  case IntrinsicOp::IOP_WavePrefixProduct:
  case IntrinsicOp::IOP_WavePrefixSum:
  case IntrinsicOp::IOP_abs:
  case IntrinsicOp::IOP_clamp:
  case IntrinsicOp::IOP_dot:
  case IntrinsicOp::IOP_firstbithigh:
  case IntrinsicOp::IOP_mad:
  case IntrinsicOp::IOP_max:
  case IntrinsicOp::IOP_min:
  case IntrinsicOp::IOP_mul:
  case IntrinsicOp::IOP_sign:
  case IntrinsicOp::MOP_InterlockedMax:
  case IntrinsicOp::MOP_InterlockedMax64:
  case IntrinsicOp::MOP_InterlockedMin:
  case IntrinsicOp::MOP_InterlockedMin64:
    return true;
  default:
    return false;
  }
}
inline unsigned GetUnsignedIntrinsicOpcode(IntrinsicOp opcode) {
  switch (opcode) {
  case IntrinsicOp::IOP_InterlockedMax:
    return static_cast<unsigned>(IntrinsicOp::IOP_InterlockedUMax);
  case IntrinsicOp::IOP_InterlockedMin:
    return static_cast<unsigned>(IntrinsicOp::IOP_InterlockedUMin);
  case IntrinsicOp::IOP_WaveActiveMax:
    return static_cast<unsigned>(IntrinsicOp::IOP_WaveActiveUMax);
  case IntrinsicOp::IOP_WaveActiveMin:
    return static_cast<unsigned>(IntrinsicOp::IOP_WaveActiveUMin);
  case IntrinsicOp::IOP_WaveActiveProduct:
    return static_cast<unsigned>(IntrinsicOp::IOP_WaveActiveUProduct);
  case IntrinsicOp::IOP_WaveActiveSum:
    return static_cast<unsigned>(IntrinsicOp::IOP_WaveActiveUSum);
  case IntrinsicOp::IOP_WaveMultiPrefixProduct:
    return static_cast<unsigned>(IntrinsicOp::IOP_WaveMultiPrefixUProduct);
  case IntrinsicOp::IOP_WaveMultiPrefixSum:
    return static_cast<unsigned>(IntrinsicOp::IOP_WaveMultiPrefixUSum);
  case IntrinsicOp::IOP_WavePrefixProduct:
    return static_cast<unsigned>(IntrinsicOp::IOP_WavePrefixUProduct);
  case IntrinsicOp::IOP_WavePrefixSum:
    return static_cast<unsigned>(IntrinsicOp::IOP_WavePrefixUSum);
  case IntrinsicOp::IOP_abs:
    return static_cast<unsigned>(IntrinsicOp::IOP_uabs);
  case IntrinsicOp::IOP_clamp:
    return static_cast<unsigned>(IntrinsicOp::IOP_uclamp);
  case IntrinsicOp::IOP_dot:
    return static_cast<unsigned>(IntrinsicOp::IOP_udot);
  case IntrinsicOp::IOP_firstbithigh:
    return static_cast<unsigned>(IntrinsicOp::IOP_ufirstbithigh);
  case IntrinsicOp::IOP_mad:
    return static_cast<unsigned>(IntrinsicOp::IOP_umad);
  case IntrinsicOp::IOP_max:
    return static_cast<unsigned>(IntrinsicOp::IOP_umax);
  case IntrinsicOp::IOP_min:
    return static_cast<unsigned>(IntrinsicOp::IOP_umin);
  case IntrinsicOp::IOP_mul:
    return static_cast<unsigned>(IntrinsicOp::IOP_umul);
  case IntrinsicOp::IOP_sign:
    return static_cast<unsigned>(IntrinsicOp::IOP_usign);
  case IntrinsicOp::MOP_InterlockedMax:
    return static_cast<unsigned>(IntrinsicOp::MOP_InterlockedUMax);
  case IntrinsicOp::MOP_InterlockedMax64:
    return static_cast<unsigned>(IntrinsicOp::MOP_InterlockedUMax);
  case IntrinsicOp::MOP_InterlockedMin:
    return static_cast<unsigned>(IntrinsicOp::MOP_InterlockedUMin);
  case IntrinsicOp::MOP_InterlockedMin64:
    return static_cast<unsigned>(IntrinsicOp::MOP_InterlockedUMin);
  default:
    return static_cast<unsigned>(opcode);
  }
}
} // namespace hlsl
