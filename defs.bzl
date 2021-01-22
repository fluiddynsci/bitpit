def bitpit_library(name, **kwargs):
    native.cc_library(
        name = name,
        srcs = native.glob(["src/{}/*.cpp".format(name)]),
        hdrs = native.glob(["src/{}/*.hpp".format(name)]),
        includes = ["src/{}".format(name)],
        textual_hdrs = native.glob(["src/{}/*.tpp".format(name)]),
        copts = ["-Isrc/{}".format(name)],
        alwayslink = 1,
        **kwargs
    )
