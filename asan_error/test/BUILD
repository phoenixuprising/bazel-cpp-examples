cc_test(
    name = "test",
    srcs = ["test.cpp"],
    copts = [
      "-Iexternal/gtest/googletest/include",
      "-Iexternal/gtest/googletest",
    ],
    deps = [
        "@googletest//:main",
        "//0_error/main:bin",
    ],
)
