#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_A528B = 0,
    VARIANT_A528B/DS,
    VARIANT_M526B,
    VARIANT_M526B/DS,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-A528B",
    .codename = "a52sxq"
};

static const variant international_models_m52 = {
    .model = "SM-M526B",
    .codename = "m52xq"
};

static const variant america_models = {
    .model = "SM-A528B/DS",
    .codename = "a52sxq"
};

static const variant america_models_m52 = {
    .model = "SM-M526B/DS",
    .codename = "m52xq"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models,
    &international_models_m52,
    &america_models,
    &america_models_m52
};

#endif // INIT_SEC_H
