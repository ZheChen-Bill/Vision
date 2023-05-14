/*
 * Copyright 2021 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

int16_t input_data[] = {
    0,   0,   256, 16,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   186, 128, 130, 136, 133, 135, 132, 131, 134, 131, 128, 129, 132, 130,
    145, 149, 135, 135, 139, 135, 137, 143, 142, 137, 133, 131, 131, 127, 127, 128, 131, 135, 130, 132, 133, 136, 135,
    135, 136, 137, 141, 143, 138, 129, 132, 135, 134, 135, 131, 127, 131, 135, 131, 125, 128, 136, 136, 131, 128, 122,
    121, 119, 122, 127, 129, 131, 137, 136, 127, 125, 130, 131, 135, 132, 128, 134, 137, 134, 126, 127, 127, 128, 130,
    136, 136, 137, 137, 138, 131, 130, 130, 121, 126, 128, 122, 120, 126, 124, 125, 123, 125, 125, 125, 125, 123, 120,
    121, 119, 125, 129, 126, 126, 128, 132, 128, 125, 123, 121, 124, 123, 128, 129, 122, 115, 118, 121, 120, 119, 117,
    121, 122, 124, 117, 116, 122, 116, 118, 117, 112, 109, 118, 121, 115, 116, 115, 114, 117, 116, 115, 106, 108, 112,
    110, 110, 107, 104, 105, 99,  105, 114, 112, 106, 108, 111, 109, 103, 104, 106, 114, 114, 115, 110, 104, 105, 104,
    109, 105, 102, 104, 102, 105, 105, 104, 103, 106, 109, 110, 108, 103, 106, 106, 102, 98,  105, 103, 94,  96,  97,
    96,  93,  88,  90,  91,  91,  84,  79,  72,  70,  67,  57,  44,  36,  44,  69,  89,  95,  93,  96,  99,  106, 109,
    106, 102, 99,  96,  100, 106, 108, 102, 103, 107, 104, 106, 106, 102, 106, 105, 109, 114, 112, 109, 109, 109, 112,
    114, 112, 112, 111, 113, 120, 122, 121, 120, 120, 124, 121, 121, 117, 119, 114, 114, 111, 110, 117, 109, 110, 109,
    111, 106, 113, 115, 116, 116, 120, 119, 115, 115, 120, 122, 126, 149, 176, 192, 217, 226, 219, 225, 233, 230, 225,
    224, 226, 233, 232, 228, 220, 207, 197, 194, 200, 205, 203, 207, 216, 218, 221, 230, 233, 233, 233, 228, 225, 233,
    237, 230, 223, 230, 232, 227, 229, 226, 219, 220, 222, 221, 219, 212, 215, 221, 218, 224, 232, 232, 233, 231, 245,
    246, 238, 231, 228, 229, 224, 234, 227, 221, 226, 229, 225, 218, 215, 207, 201, 194, 204, 226, 232, 235, 226, 230,
    238, 241, 234, 240, 242, 229, 226, 221, 221, 223, 220, 208, 203, 201, 198, 204, 200, 159, 118, 99,  102, 110, 104,
    100, 101, 94,  88,  95,  108, 114, 117, 102, 83,  79,  77,  70,  63,  63,  64,  59,  54,  54,  52,  53,  56,  57,
    56,  60,  62,  64,  67,  72,  73,  78,  81,  86,  90,  86,  87,  86,  91,  96,  101, 103, 104, 108, 106, 105, 109,
    111, 123, 174, 197, 196, 190, 198, 203, 201, 201, 200, 195, 195, 197, 197, 201, 199, 195, 200, 197, 198, 199, 192,
    191, 186, 191, 189, 190, 188, 185, 187, 187, 177, 180, 180, 181, 182, 174, 173, 179, 174, 170, 167, 168, 172, 170,
    167, 164, 166, 167, 165, 161, 163, 162, 159, 154, 156, 157, 148, 153, 157, 155, 154, 151, 146, 145, 150, 156, 148,
    140, 143, 146, 148, 146, 138, 132, 128, 126, 115, 90,  97,  148, 162, 153, 158, 154, 162, 169, 181, 179, 176, 175,
    185, 185, 185, 185, 192, 194, 192, 181, 185, 191, 194, 196, 187, 193, 195, 194, 190, 190, 192, 184, 192, 197, 200,
    196, 197, 198, 191, 175, 173, 172, 177, 185, 193, 195, 191, 196, 197, 195, 196, 200, 206, 209, 208, 209, 205, 203,
    208, 211, 207, 208, 209, 212, 213, 209, 209, 211, 212, 210, 214, 214, 212, 204, 201, 209, 210, 209, 207, 214, 213,
    208, 208, 208, 201, 193, 201, 206, 202, 206, 212, 208, 204, 207, 211, 204, 206, 211, 204, 199, 197, 204, 205, 206,
    206, 206, 204, 195, 195, 199, 202, 203, 194, 194, 197, 191, 194, 201, 197, 197, 195, 196, 193, 198, 194, 192, 192,
    191, 189, 189, 188, 183, 182, 181, 180, 184, 187, 185, 181, 179, 172, 173, 175, 173, 174, 180, 179, 175, 174, 172,
    165, 149, 145, 148, 151, 148, 148, 150, 152, 154, 153, 153, 154, 156, 156, 167, 166, 162, 171, 177, 181, 183, 176,
    184, 192, 196, 201, 202, 204, 202, 205, 205, 202, 203, 205, 207, 204, 207, 208, 204, 210, 211, 204, 208, 204, 207,
    212, 212, 212, 212, 214, 217, 215, 215, 213, 213, 211, 214, 213, 216, 215, 213, 214, 213, 215, 215, 214, 214, 208,
    210, 209, 203, 203, 209, 208, 207, 208, 208, 206, 206, 207, 202, 206, 207, 208, 204, 201, 198, 198, 202, 202, 202,
    203, 198, 201, 203, 199, 198, 202, 201, 197, 198, 194, 194, 196, 196, 193, 194, 194, 193, 188, 187, 186, 188, 181,
    184, 175, 173, 181, 179, 168, 174, 175, 171, 174, 165, 163, 167, 163, 167, 162, 158, 149, 141, 105, 56,  48,  47,
    48,  48,  42,  43,  48,  50,  50,  54,  61,  68,  69,  67,  74,  85,  79,  62,  48,  41,  35,  33,  45,  65,  100,
    139, 155, 156, 148, 130, 107, 98,  78,  66,  71,  87,  103, 123, 123, 111, 104, 96,  92,  93,  92,  83,  93,  83,
    72,  74,  86,  87,  74,  74,  76,  71,  67,  74,  69,  55,  53,  50,  46,  43,  41,  37,  33,  36,  50,  60,  69,
    53,  35,  32,  44,  52,  51,  52,  53,  49,  36,  37,  32,  25,  26,  34,  61,  106, 101, 79,  59,  59,  65,  71,
    68,  52,  40,  38,  31,  29,  37,  40,  38,  28,  25,  39,  50,  43,  38,  31,  22,  28,  29,  24,  26,  29,  31,
    30,  24,  17,  21,  33,  35,  38,  71,  91,  87,  88,  90,  92,  103, 112, 110, 101, 82,  74,  84,  91,  78,  69,
    74,  84,  91,  94,  92,  101, 105, 103, 114, 121, 114, 117, 138, 153, 139, 112, 110, 118, 118, 111, 106, 120, 125,
    115, 119, 129, 131, 128, 120, 107, 95,  76,  60,  55,  72,  100, 95,  76,  66,  58,  49,  43,  48,  66,  74,  72,
    66,  67,  71,  75,  77,  87,  96,  102, 107, 109, 114, 119, 122, 117, 111, 110, 113, 112, 110, 110, 108, 105, 100,
    97,  97,  113, 131, 127, 111, 110, 108, 98,  94,  93,  92,  98,  104, 105, 93,  79,  86,  93,  104, 115, 125, 120,
    121, 126, 122, 107, 109, 120, 113, 110, 99,  99,  95,  109, 120, 127, 128, 125, 121, 114, 121, 124, 131, 124, 92,
    83,  97,  110, 111, 106, 101, 96,  93,  96,  103, 104, 108, 111, 118, 136, 129, 107, 97,  95,  108, 116, 114, 128,
    142, 141, 134, 130, 129, 115, 103, 108, 115, 105, 82,  86,  100, 103, 89,  68,  54,  54,  61,  70,  75,  70,  69,
    65,  60,  55,  55,  54,  52,  46,  51,  57,  59,  62,  62,  50,  44,  49,  60,  67,  71,  77,  63,  44,  38,  47,
    48,  50,  50,  55,  55,  58,  66,  106, 134, 140, 135, 134, 132, 122, 113, 110, 111, 117, 132, 147, 156, 145, 141,
    140, 124, 104, 91,  94,  106, 106, 103, 100, 99,  102, 104, 101, 85,  82,  76,  77,  82,  87,  90,  106, 126, 128,
    122, 120, 115, 105, 96,  87,  85,  78,  65,  52,  59,  82,  108, 116, 111, 105, 87,  79,  91,  96,  84,  94,  136,
    188, 213, 205, 204, 214, 214, 211, 205, 202, 204, 199, 202, 198, 187, 168, 138, 108, 100, 95,  103, 107, 122, 141,
    173, 178, 182, 180, 185, 181, 179, 178, 179, 170, 175, 174, 173, 169, 176, 177, 176, 173, 172, 179, 178, 174, 173,
    173, 177, 178, 175, 183, 183, 182, 175, 177, 178, 176, 178, 178, 184, 188, 191, 201, 202, 196, 191, 190, 187, 183,
    187, 183, 186, 188, 184, 184, 191, 199, 204, 203, 199, 198, 201, 192, 193, 198, 196, 193, 194, 200, 202, 202, 199,
    189, 197, 208, 204, 203, 201, 199, 193, 196, 198, 193, 188, 189, 187, 187, 185, 184, 187, 188, 181, 189, 188, 185,
    186, 190, 187, 192, 185, 183, 182, 186, 193, 190, 186, 185, 188, 193, 195, 188, 184, 185, 188, 190, 190, 189, 187,
    185, 184, 186, 187, 185, 188, 189, 187, 191, 193, 191, 188, 185, 189, 192, 191, 190, 184, 183, 185, 190, 195, 190,
    192, 188, 187, 183, 183, 190, 189, 188, 187, 191, 191, 188, 188, 189, 192, 190, 189, 186, 187, 190, 188, 184, 187,
    188, 184, 183, 188, 187, 188, 192, 192, 188, 189, 188, 192, 196, 192, 189, 187, 189, 194, 197, 196, 195, 193, 196,
    198, 188, 174, 180, 143, 113, 161, 187, 119, 55,  50,  67,  62,  42,  36,  36,  32,  26,  24,  28,  28,  32,  33,
    34,  37,  40,  40,  47,  53,  55,  56,  57,  59,  57,  55,  53,  53,  54,  59,  56,  53,  59,  66,  70,  74,  77,
    81,  83,  86,  85,  84,  77,  71,  79,  79,  76,  77,  74,  71,  63,  54,  49,  48,  45,  41,  45,  51,  50,  50,
    48,  47,  43,  45,  43,  44,  46,  51,  61,  86,  117, 136, 140, 142, 148, 150, 156, 155, 161, 155, 156, 149, 154,
    160, 159, 155, 156, 160, 153, 126, 86,  67,  76,  99,  122, 122, 117, 116, 114, 105, 100, 113, 116, 117, 111, 90,
    84,  89,  85,  70,  60,  63,  68,  93,  113, 109, 117, 125, 116, 105, 105, 104, 97,  85,  98,  160, 198, 201, 191,
    186, 199, 211, 210, 201, 212, 224, 234, 234, 223, 227, 229, 227, 228, 228, 228, 227, 227, 228, 224, 223, 222, 221,
    230, 220, 218, 225, 232, 233, 230, 228, 225, 223, 223, 226, 224, 228, 227, 224, 216, 221, 225, 223, 223, 223, 229,
    221, 219, 220, 223, 219, 223, 221, 218, 222, 222, 223, 217, 217, 223, 219, 214, 222, 222, 221, 213, 214, 221, 224,
    219, 222, 223, 222, 221, 219, 219, 218, 219, 221, 220, 221, 222, 218, 222, 220, 213, 219, 222, 217, 210, 214, 217,
    218, 220, 220, 218, 216, 220, 222, 222, 230, 227, 222, 225, 225, 227, 224, 218, 219, 226, 220, 218, 218, 220, 227,
    222, 217, 220, 223, 227, 228, 222, 220, 218, 218, 222, 217, 216, 214, 215, 219, 226, 221, 223, 221, 223, 226, 224,
    225, 229, 230, 233, 231, 227, 227, 230, 227, 226, 230, 228, 229, 232, 230, 223, 223, 220, 216, 217, 225, 223, 219,
    217, 220, 219, 218, 218, 221, 219, 217, 217, 217, 217, 215, 217, 217, 219, 216, 220, 219, 217, 217, 218, 219, 221,
    221, 223, 220, 217, 220, 218, 214, 213, 213, 216, 216, 210, 215, 216, 216, 219, 223, 221, 216, 214, 219, 210, 216,
    219, 217, 221, 217, 216, 218, 216, 217, 219, 218, 218, 220, 221, 220, 218, 215, 216, 221, 222, 221, 217, 216, 218,
    212, 208, 216, 222, 219, 221, 218, 218, 220, 219, 218, 217, 218, 216, 217, 220, 221, 218, 219, 216, 213, 221, 219,
    213, 219, 221, 219, 221, 218, 220, 220, 218, 225, 221, 217, 225, 228, 224, 219, 222, 219, 223, 225, 222, 226, 220,
    221, 225, 218, 220, 223, 223, 222, 221, 228, 224, 226, 230, 230, 228, 232, 226, 228, 226, 232, 229, 231, 229, 228,
    227, 221, 222, 220, 221, 224, 225, 220, 221, 224, 225, 228, 227, 225, 228, 229, 220, 221, 224, 223, 226, 226, 223,
    226, 229, 232, 233, 230, 229, 232, 225, 226, 229, 231, 230, 226, 224, 220, 232, 235, 226, 226, 230, 232, 229, 227,
    228, 228, 232, 220, 221, 236, 236, 232, 230, 236, 239, 235, 233, 230, 229, 237, 236, 234, 236, 236, 238, 234, 236,
    233, 236, 232, 238, 234, 233, 234, 233, 232, 232, 232, 220, 219, 221, 212, 191, 186, 192, 199, 196, 184, 136, 133,
    131, 126, 129, 128, 130, 129, 128, 126, 129, 136, 141, 143, 142, 137, 142, 139, 139, 140, 141, 142, 140, 133, 134,
    134, 133, 131, 126, 125, 123, 129, 133, 133, 134, 137, 141, 138, 136, 137, 134, 134, 129, 125, 131, 136, 132, 133,
    138, 137, 135, 133, 132, 133, 129, 129, 132, 125, 118, 114, 127, 129, 131, 132, 128, 129, 130, 120, 126, 136, 132,
    130, 131, 132, 135, 139, 130, 134, 130, 124, 126, 130, 131, 136, 135, 130, 132, 129, 123, 129, 129, 127, 128, 130,
    128, 125, 125, 124, 125, 121, 116, 118, 121, 115, 118, 115, 120, 120, 123, 123, 128, 127, 128, 127, 128, 128, 115,
    114, 120, 120, 125, 124, 117, 122, 126, 123, 116, 120, 125, 121, 115, 114, 117, 115, 111, 111, 111, 111, 119, 122,
    118, 113, 113, 110, 112, 117, 117, 111, 104, 97,  104, 113, 111, 108, 101, 105, 108, 109, 107, 110, 108, 103, 109,
    111, 105, 107, 106, 108, 104, 109, 105, 103, 107, 102, 106, 104, 101, 97,  105, 101, 105, 107, 106, 98,  106, 106,
    102, 108, 102, 101, 105, 102, 98,  99,  96,  83,  86,  96,  100, 96,  89,  89,  86,  79,  75,  68,  65,  61,  53,
    40,  38,  57,  79,  88,  96,  100, 99,  102, 103, 98,  96,  96,  99,  100, 101, 105, 107, 107, 104, 100, 104, 107,
    103, 101, 102, 109, 111, 111, 113, 111, 110, 117, 115, 119, 118, 111, 111, 110, 116, 115, 118, 112, 122, 124, 118,
    120, 120, 120, 123, 115, 113, 113, 117, 112, 111, 110, 109, 105, 109, 112, 117, 118, 119, 113, 109, 111, 117, 119,
    123, 146, 172, 191, 216, 220, 222, 230, 227, 230, 230, 221, 230, 237, 232, 230, 224, 210, 194, 196, 200, 196, 205,
    215, 222, 226, 231, 229, 229, 233, 228, 232, 235, 229, 233, 235, 229, 228, 231, 228, 225, 230, 225, 224, 222, 217,
    215, 219, 212, 219, 224, 227, 228, 230, 234, 239, 228, 229, 243, 238, 231, 229, 230, 230, 229, 226, 231, 222, 222,
    219, 221, 216, 206, 200, 199, 222, 227, 234, 227, 232, 233, 241, 239, 245, 244, 235, 230, 229, 230, 231, 232, 215,
    195, 202, 205, 205, 201, 167, 123, 100, 95,  101, 105, 103, 97,  87,  85,  86,  85,  91,  96,  90,  84,  79,  74,
    67,  63,  62,  62,  61,  55,  50,  51,  50,  51,  54,  57,  61,  65,  69,  72,  69,  76,  80,  82,  82,  84,  90,
    88,  88,  96,  89,  94,  100, 103, 105, 106, 109, 110, 112, 123, 167, 194, 190, 194, 204, 203, 201, 191, 196, 201,
    198, 196, 198, 193, 198, 203, 204, 199, 200, 202, 194, 188, 189, 184, 181, 191, 189, 180, 183, 181, 187, 185, 186,
    184, 181, 177, 174, 175, 178, 171, 171, 171, 171, 170, 168, 168, 166, 163, 164, 163, 164, 162, 155, 154, 155, 156,
    154, 156, 156, 153, 153, 150, 146, 149, 152, 150, 143, 144, 146, 145, 142, 138, 138, 130, 121, 120, 106, 87,  103,
    153, 163, 153, 150, 153, 162, 171, 171, 176, 177, 178, 183, 185, 181, 188, 196, 197, 186, 180, 183, 187, 193, 192,
    189, 193, 193, 187, 190, 192, 191, 185, 191, 194, 199, 203, 199, 190, 183, 174, 175, 184, 183, 189, 196, 198, 192,
    194, 196, 199, 200, 200, 203, 205, 205, 207, 206, 205, 210, 210, 210, 209, 208, 207, 211, 209, 206, 204, 201, 207,
    216, 213, 214, 211, 211, 204, 205, 206, 210, 213, 209, 210, 205, 204, 201, 200, 204, 208, 209, 204, 206, 210, 209,
    204, 208, 205, 204, 205, 206, 205, 199, 202, 206, 207, 197, 198, 205, 198, 198, 193, 191, 196, 193, 195, 198, 191,
    192, 193, 191, 197, 196, 195, 201, 196, 192, 191, 190, 188, 187, 188, 187, 186, 177, 180, 182, 182, 184, 183, 185,
    180, 178, 179, 179, 180, 180, 183, 178, 175, 179, 180, 166, 144, 147, 150, 150, 149, 149, 149, 151, 152, 153, 154,
    156, 157, 164, 170, 169, 164, 170, 180, 185, 186, 189, 194, 197, 194, 195, 203, 201, 204, 202, 205, 206, 207, 209,
    207, 207, 209, 206, 210, 208, 208, 211, 216, 204, 203, 210, 214, 210, 206, 212, 215, 214, 214, 217, 218, 216, 214,
    215, 211, 209, 205, 209, 214, 213, 214, 216, 210, 210, 210, 210, 193, 189, 206, 210, 213, 209, 203, 202, 203, 202,
    202, 196, 202, 205, 201, 205, 204, 199, 197, 201, 202, 199, 196, 197, 202, 203, 200, 203, 199, 201, 203, 198, 196,
    202, 196, 200, 198, 195, 194, 192, 183, 179, 184, 186, 183, 177, 176, 181, 177, 169, 171, 174, 173, 171, 170, 167,
    165, 158, 156, 156, 157, 144, 145, 110, 72,  69,  65,  60,  62,  70,  67,  53,  41,  37,  49,  72,  77,  84,  83,
    68,  60,  61,  63,  59,  46,  33,  29,  30,  38,  64,  110, 149, 162, 151, 124, 105, 105, 99,  95,  107, 108, 115,
    132, 137, 118, 91,  73,  70,  72,  69,  72,  96,  101, 84,  79,  80,  73,  67,  57,  51,  50,  47,  52,  46,  46,
    43,  42,  45,  40,  35,  35,  37,  51,  65,  62,  48,  26,  24,  41,  46,  49,  48,  42,  41,  35,  22,  24,  25,
    20,  34,  55,  58,  64,  66,  63,  59,  58,  60,  67,  61,  46,  35,  33,  35,  35,  38,  50,  60,  49,  32,  29,
    30,  33,  36,  40,  37,  44,  56,  38,  18,  21,  25,  25,  28,  29,  24,  21,  21,  28,  49,  78,  69,  71,  97,
    108, 105, 111, 116, 106, 85,  75,  84,  108, 107, 76,  65,  76,  85,  85,  89,  95,  98,  105, 112, 118, 117, 115,
    134, 147, 125, 105, 106, 115, 112, 102, 95,  109, 123, 122, 114, 117, 122, 123, 123, 113, 98,  79,  60,  49,  62,
    89,  97,  82,  67,  64,  58,  45,  54,  70,  73,  74,  74,  74,  76,  70,  71,  84,  94,  95,  104, 111, 110, 118,
    119, 118, 119, 116, 114, 113, 114, 111, 113, 111, 105, 102, 103, 113, 133, 125, 110, 104, 108, 105, 99,  95,  96,
    94,  99,  103, 98,  88,  86,  85,  94,  103, 108, 116, 124, 125, 117, 111, 103, 110, 111, 106, 99,  99,  101, 106,
    116, 124, 120, 116, 119, 122, 120, 125, 129, 107, 79,  90,  103, 110, 111, 102, 99,  93,  88,  92,  94,  101, 109,
    120, 135, 129, 105, 95,  94,  93,  109, 117, 107, 120, 134, 137, 126, 117, 121, 109, 104, 111, 113, 100, 81,  83,
    105, 106, 88,  70,  57,  59,  68,  68,  66,  67,  65,  56,  51,  49,  44,  43,  46,  57,  53,  51,  54,  62,  56,
    51,  48,  59,  68,  71,  78,  76,  56,  42,  41,  48,  53,  55,  56,  55,  54,  51,  61,  107, 122, 134, 135, 124,
    121, 118, 111, 113, 114, 121, 144, 152, 147, 135, 131, 136, 119, 92,  85,  94,  97,  104, 97,  98,  104, 105, 106,
    90,  66,  72,  81,  77,  73,  78,  95,  118, 125, 118, 117, 114, 107, 100, 92,  88,  79,  68,  60,  73,  91,  102,
    109, 104, 101, 95,  83,  74,  81,  86,  79,  88,  135, 191, 211, 207, 206, 204, 202, 204, 211, 208, 205, 205, 202,
    186, 157, 117, 98,  90,  83,  82,  99,  106, 98,  110, 142, 177, 188, 183, 182, 180, 179, 176, 176, 177, 182, 177,
    172, 173, 176, 176, 176, 172, 173, 181, 172, 173, 175, 171, 171, 175, 172, 170, 176, 179, 173, 175, 177, 178, 184,
    186, 187, 190, 193, 195, 196, 192, 189, 185, 185, 181, 181, 182, 184, 186, 186, 185, 190, 199, 199, 197, 197, 196,
    202, 204, 193, 197, 203, 197, 188, 197, 199, 202, 200, 194, 201, 193, 189, 199, 198, 196, 184, 187, 189, 185, 183,
    188, 183, 183, 186, 182, 184, 192, 186, 190, 195, 195, 193, 188, 183, 188, 190, 191, 191, 189, 190, 189, 184, 187,
    185, 191, 187, 186, 189, 188, 189, 190, 187, 186, 190, 191, 184, 177, 182, 189, 189, 190, 189, 186, 188, 191, 194,
    190, 192, 195, 191, 185, 185, 183, 190, 192, 192, 191, 183, 187, 191, 193, 193, 188, 183, 186, 189, 188, 192, 190,
    186, 186, 191, 190, 188, 186, 191, 191, 187, 188, 188, 190, 186, 186, 189, 188, 187, 186, 189, 193, 194, 195, 188,
    193, 188, 189, 189, 188, 192, 198, 199, 200, 196, 194, 196, 189, 179, 179, 163, 108, 143, 196, 144, 73,  50,  61,
    68,  50,  39,  36,  32,  26,  22,  22,  25,  30,  34,  35,  41,  46,  40,  44,  56,  56,  57,  55,  59,  63,  59,
    53,  53,  56,  59,  57,  51,  58,  67,  68,  71,  77,  82,  81,  86,  88,  81,  76,  78,  82,  80,  76,  78,  79,
    69,  57,  53,  49,  47,  42,  40,  42,  47,  48,  48,  50,  46,  47,  45,  45,  46,  50,  52,  65,  90,  124, 133,
    136, 136, 144, 151, 150, 151, 157, 159, 156, 157, 167, 163, 152, 155, 158, 159, 155, 134, 109, 93,  103, 119, 126,
    128, 120, 117, 110, 101, 104, 112, 117, 115, 92,  80,  82,  86,  83,  70,  62,  67,  75,  93,  107, 108, 115, 124,
    122, 116, 109, 102, 89,  88,  123, 180, 205, 194, 190, 194, 202, 205, 207, 203, 213, 220, 231, 228, 231, 228, 230,
    227, 226, 227, 233, 224, 230, 230, 228, 224, 222, 227, 227, 228, 232, 230, 226, 227, 225, 226, 229, 225, 230, 224,
    217, 228, 229, 225, 229, 218, 217, 224, 225, 223, 223, 220, 221, 216, 222, 223, 224, 222, 225, 223, 225, 222, 217,
    219, 224, 218, 216, 224, 223, 220, 223, 223, 226, 218, 211, 212, 217, 212, 214, 223, 220, 221, 222, 219, 222, 223,
    221, 218, 222, 224, 225, 224, 222, 212, 217, 220, 221, 211, 220, 222, 215, 216, 222, 213, 224, 227, 222, 218, 222,
    224, 224, 223, 221, 217, 216, 214, 215, 220, 221, 225, 229, 225, 222, 222, 219, 219, 219, 219, 222, 216, 209, 213,
    212, 217, 220, 217, 219, 222, 225, 222, 227, 227, 225, 231, 230, 230, 231, 224, 224, 224, 227, 232, 231, 225, 224,
    227, 229, 223, 221, 218, 218, 216, 219, 221, 221, 219, 217, 221, 219, 221, 222, 218, 207, 216, 216, 220, 220, 213,
    218, 222, 220, 217, 214, 212, 212, 214, 218, 222, 215, 216, 220, 220, 219, 211, 209, 216, 217, 216, 215, 218, 223,
    219, 219, 219, 217, 215, 216, 218, 222, 218, 216, 219, 220, 214, 218, 214, 217, 219, 213, 214, 219, 217, 218, 218,
    215, 219, 217, 220, 220, 218, 218, 218, 215, 217, 216, 210, 212, 222, 222, 216, 216, 218, 213, 212, 217, 221, 216,
    215, 218, 218, 220, 218, 219, 218, 222, 223, 221, 220, 220, 222, 219, 221, 226, 222, 220, 221, 218, 223, 229, 225,
    225, 226, 227, 223, 213, 226, 218, 217, 217, 219, 224, 221, 221, 225, 228, 221, 223, 226, 226, 220, 223, 223, 231,
    229, 218, 220, 224, 229, 230, 231, 230, 226, 226, 222, 228, 225, 224, 223, 223, 225, 223, 217, 226, 230, 228, 224,
    224, 225, 220, 221, 225, 221, 225, 228, 227, 224, 227, 233, 231, 230, 232, 231, 230, 231, 227, 227, 228, 227, 223,
    232, 226, 216, 222, 227, 229, 225, 230, 230, 230, 231, 234, 234, 231, 233, 231, 231, 239, 236, 232, 234, 234, 233,
    236, 234, 232, 236, 232, 230, 233, 234, 233, 230, 234, 233, 235, 235, 235, 233, 236, 237, 231, 232, 236, 233, 225,
    225, 223, 207, 185, 186, 195, 201, 198, 186, 131, 130, 132, 127, 123, 127, 126, 126, 128, 130, 130, 134, 133, 135,
    137, 140, 136, 139, 137, 135, 131, 134, 133, 134, 139, 140, 130, 130, 133, 128, 125, 128, 133, 133, 132, 132, 131,
    127, 131, 130, 126, 128, 127, 124, 123, 128, 133, 134, 136, 136, 133, 135, 138, 132, 129, 127, 130, 129, 126, 128,
    131, 129, 130, 128, 126, 123, 121, 129, 139, 143, 138, 129, 126, 134, 135, 134, 129, 133, 130, 128, 126, 121, 117,
    123, 125, 126, 130, 127, 125, 121, 117, 126, 124, 122, 124, 121, 123, 124, 117, 107, 110, 117, 119, 121, 126, 118,
    122, 126, 122, 122, 126, 127, 124, 122, 124, 124, 123, 120, 122, 126, 130, 125, 125, 128, 125, 121, 118, 116, 120,
    123, 120, 116, 117, 114, 116, 116, 112, 116, 124, 119, 111, 110, 106, 105, 107, 109, 111, 107, 112, 107, 105, 110,
    108, 102, 98,  101, 106, 111, 111, 110, 111, 110, 106, 108, 106, 108, 100, 99,  101, 105, 104, 109, 109, 100, 95,
    105, 109, 103, 107, 99,  103, 103, 102, 104, 102, 100, 102, 106, 103, 102, 103, 99,  100, 99,  90,  86,  88,  96,
    97,  94,  89,  87,  83,  79,  74,  69,  65,  55,  42,  38,  50,  72,  85,  92,  95,  93,  97,  105, 105, 101, 98,
    97,  99,  99,  98,  98,  100, 104, 106, 102, 102, 103, 103, 107, 109, 110, 114, 111, 112, 119, 118, 115, 120, 120,
    112, 110, 111, 112, 112, 115, 113, 113, 115, 125, 124};
