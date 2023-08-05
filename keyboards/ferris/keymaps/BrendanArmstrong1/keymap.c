{    "version": 1,
    "notes": "My Keymap",
    "documentation": "\"This file is a QMK Configurator export. You can import this at <https://config.qmk.fm>. It can also be used directly with QMK's source code.\n\nTo setup your QMK environment check out the tutorial: <https://docs.qmk.fm/#/newbs>\n\nYou can convert this file to a keymap.c using this command: `qmk json2c {keymap}`\n\nYou can compile this keymap using this command: `qmk compile {keymap}`\"\n",
    "keyboard": "ferris/0_1",
    "keymap": "brendan_colmak_dh",
    "layout": "LAYOUT_split_3x5_2",
    "layers": [
        ["LGUI_T(KC_QUOT)", "LALT_T(KC_COMM)", "KC_DOT" , "KC_P"   , "KC_Y",
         "KC_F"           , "KC_G"           , "KC_C"   , "KC_R"   , "KC_L",

         "KC_A"           , "KC_O"           , "KC_E"   , "KC_U"   , "KC_I",
         "KC_D"           , "KC_H"           , "KC_T"   , "KC_N"   , "KC_S",

         "LT(2,KC_SCLN)"  , "KC_Q"           , "KC_J"   , "KC_K"   , "KC_X",
         "KC_B"           , "KC_M"           , "KC_W"   , "KC_V"   , "KC_Z",

         "KC_LSFT"        , "OSL(1)",
         "KC_SPC"         , "KC_LCTL"
        ],
        ["KC_GRV"         , "KC_LT"          , "KC_GT"  , "KC_SLSH", "KC_PLUS",
         "KC_MINS"        , "KC_LBRC"        , "KC_RBRC", "KC_AT"  , "KC_BSPC",

         "KC_ESC"         , "KC_HASH"        , "KC_TILD", "KC_ASTR", "KC_TAB",
         "KC_ENT"         , "KC_LCBR"        , "KC_RCBR", "KC_QUES", "KC_SCLN",

         "KC_COLN"        , "KC_UNDS"        , "KC_BSLS", "KC_AMPR", "KC_PIPE",
         "KC_EQL"         , "KC_LPRN"        , "KC_RPRN", "KC_DLR" , "KC_EXLM",

         "KC_LSFT"        , "OSL(1)",
         "KC_SPC"         , "KC_LCTL"
        ],
        ["OSL(3)"         , "KC_COMM"        , "KC_DOT" , "KC_SLSH", "KC_PLUS",
         "KC_MINS"        , "KC_1"           , "KC_2"   , "KC_3"   , "KC_BSPC",

         "KC_INS"         , "KC_DEL"         , "KC_PERC", "KC_ASTR", "KC_CIRC",
         "KC_ENT"         , "KC_4"           , "KC_5"   , "KC_6"   , "KC_0",

         "KC_TRNS"        , "KC_LEFT"        , "KC_DOWN", "KC_UP"  , "KC_RGHT",
         "KC_EQL"         , "KC_7"           , "KC_8"   , "KC_9"   , "KC_LGUI",

         "KC_LSFT"        , "KC_LALT",
         "KC_SPC"         , "KC_LCTL"
        ],
        ["KC_TRNS"        , "KC_F1"          , "KC_F2"  , "KC_F3"  , "KC_F4",
         "KC_WH_U"        , "KC_BTN1"        , "KC_BTN2", "KC_BTN4", "KC_BTN5",

         "KC_F5"          , "KC_F6"          , "KC_F7"  , "KC_F8"  , "KC_F9",
         "KC_MS_L"        , "KC_MS_D"        , "KC_MS_U", "KC_MS_R", "KC_ACL0",

         "KC_F10"         , "KC_F11"         , "KC_F12" , "KC_PSCR", "KC_CAPS",
         "KC_WH_D"        , "KC_WH_L"        , "KC_BTN3", "KC_WH_R", "KC_ACL1",

         "KC_LSFT"        , "KC_LALT",
         "TO(4)"          , "KC_LCTL"
        ],
        ["KC_TAB"         , "KC_Q"           , "KC_W"   , "KC_E"   , "KC_R",
         "KC_T"           , "KC_Y"           , "KC_U"   , "KC_I"   , "KC_O",

         "KC_LSFT"        , "KC_A"           , "KC_S"   , "KC_D"   , "KC_F",
         "KC_G"           , "KC_H"           , "KC_J"   , "KC_K"   , "KC_L",

         "KC_LCTL"        , "KC_Z"           , "KC_X"   , "KC_C"   , "KC_V",
         "KC_B"           , "KC_N"           , "KC_M"   , "KC_P"   , "TO(0)",

         "KC_BSPC"        , "KC_ENT",
         "KC_SPC"         , "KC_LALT"
        ]
    ],
    "author": "@Brendan"
}
