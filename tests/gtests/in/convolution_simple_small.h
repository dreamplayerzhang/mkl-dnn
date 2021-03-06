INST_TEST_CASE(SimpleSmall_NCHW,
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 4, 4, 4, 6, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(nchw, oihw, FMT_BIAS, nchw,
        2, 1, 4, 4, 4, 6, 2, 2, 3, 3, 0, 0, 1, 1),
    PARAMS(nhwc, oihw, FMT_BIAS, nhwc,
        2, 1, 4, 4, 4, 6, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(nhwc, oihw, FMT_BIAS, nhwc,
        2, 1, 4, 4, 4, 6, 2, 2, 3, 3, 0, 0, 1, 1)
);

INST_TEST_CASE(SimpleSmall_Blocked,
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 13, 13, 32, 12, 12, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 3, 3, 32, 4, 4, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 4, 4, 32, 4, 4, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 3, 3, 32, 2, 2, 3, 3, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 2, 2, 32, 2, 2, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 13, 13, 48, 13, 13, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 32, 13, 13, 48, 11, 11, 3, 3, 0, 0, 1, 1)
);
