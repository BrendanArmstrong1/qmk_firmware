{    "version": 1,
    "notes": "My Keymap",
    "documentation": "\"This file is a QMK Configurator export. You can import this at <https://config.qmk.fm>. It can also be used directly with QMK's source code.\n\nTo setup your QMK environment check out the tutorial: <https://docs.qmk.fm/#/newbs>\n\nYou can convert this file to a keymap.c using this command: `qmk json2c {keymap}`\n\nYou can compile this keymap using this command: `qmk compile {keymap}`\"\n",
    "keyboard": "ferris/0_1",
    "keymap": "brendan_colmak_dh",
    "layout": "LAYOUT_split_3x5_2",
    "layers": [
        ["KC_QUOT", "KC_COMM"      , "KC_DOT" , "KC_P"   , "KC_Y",
         "KC_F"   , "KC_G"         , "KC_C"   , "KC_R"   , "KC_L",

         "KC_A"   , "KC_O"         , "KC_E"   , "KC_U"   , "KC_I",
         "KC_D"   , "KC_H"         , "KC_T"   , "KC_N"   , "KC_S",

         "OSL(2)" , "KC_Q"         , "KC_J"   , "KC_K"   , "KC_X",
         "KC_B"   , "KC_M"         , "KC_W"   , "KC_V"   , "KC_Z",

         "KC_LALT", "OSM(MOD_LSFT)",
         "OSL(1)" , "KC_SPC"
         "KC_LCTL",
         "KC_LGUI",
        ],
        ["KC_GRV" , "KC_LT"        , "KC_GT"  , "KC_SCLN", "KC_PLUS",
         "KC_MINS", "KC_LBRC"      , "KC_AT"  , "KC_RBRC", "KC_BSPC",

         "KC_ESC" , "KC_SLSH"      , "KC_CIRC", "KC_QUES", "KC_SCLN",
         "KC_ENT" , "KC_LCBR"      , "KC_DLR" , "KC_RCBR", "KC_BSLS",

         "KC_COLN", "KC_LEFT"      , "KC_DOWN", "KC_UP"  , "KC_RIGHT",
         "KC_EQL" , "KC_LPRN"      , "KC_TILD", "KC_RPRN", "KC_EXLM",

         "KC_LALT", "OSM(MOD_LSFT)",
         "OSL(1)" , "KC_SPC"
         "KC_LCTL",
         "KC_LGUI",
        ],
        ["MO(3)"  , "KC_COMM"      , "KC_DOT" , "KC_SCLN", "KC_PLUS",
         "KC_MINS", "KC_1"         , "KC_2"   , "KC_3"   , "KC_BSPC",

         "KC_INS" , "KC_SLSH"      , "KC_CIRC", "KC_ASTR", "KC_TAB",
         "KC_ENT" , "KC_4"         , "KC_5"   , "KC_6"   , "KC_0",

         "KC_TRNS", "KC_PERC"      , "KC_HASH", "KC_AMPR", "KC_PIPE",
         "KC_EQL" , "KC_7"         , "KC_8"   , "KC_9"   , "KC_LGUI",

         "KC_LALT", "OSM(MOD_LSFT)",
         "KC_DEL" , "KC_SPC"
         "KC_LCTL",
         "KC_LGUI",
        ],
        ["KC_TRNS", "KC_F1"        , "KC_F2"  , "KC_F3"  , "KC_F4",
         "KC_DEL" , "DM_REC1"      , "DM_PLY1", "KC_BTN2", "KC_WH_U",

         "KC_F5"  , "KC_F5"        , "KC_F6"  , "KC_F7"  , "KC_F8",
         "KC_MS_L", "KC_MS_D"      , "KC_MS_U", "KC_MS_R", "KC_BTN1",

         "KC_TRNS", "KC_F9"        , "KC_F10" , "KC_F11" , "KC_F12",
         "KC_WH_D", "DM_REC2"      , "DM_PLY2", "KC_WH_R", "KC_ACL0",

         "KC_LALT", "KC_CAPS",
         "KC_PSCR", "TO(4)"
         "KC_LCTL",
         "KC_LGUI",
        ],
        ["KC_TAB" , "KC_Q"         , "KC_W"   , "KC_E"   , "KC_R",
         "KC_T"   , "KC_Y"         , "KC_U"   , "KC_I"   , "KC_O",

         "KC_LSFT", "KC_A"         , "KC_S"   , "KC_D"   , "KC_F",
         "KC_G"   , "KC_H"         , "KC_J"   , "KC_K"   , "KC_L",

         "KC_LCTL", "KC_Z"         , "KC_X"   , "KC_C"   , "KC_V",
         "KC_B"   , "KC_N"         , "KC_M"   , "KC_P"   , "TO(0)",

         "KC_LALT", "KC_BSPC",
         "KC_ENT" , "KC_SPC"
         "KC_LCTL",
         "KC_LGUI",
        ]
    ],
    "author": "@Brendan"
}
