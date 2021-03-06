#include "types.h"

// address: 0x479C24
//
// l1_shadow contains shadows for 2x2 blocks of base tile IDs in the Cathedral.
//
// PSX ref: 0x8013A050
// PSX def: ShadowStruct SPATS[37]
//
// TODO: Figure out how to fix broken link. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/shadow/README.md
Shadow l1_shadow[37];

// address: 0x479D28
//
// l1_base maps tile IDs to their corresponding base tile ID.
//
// PSX ref: 0x8013A154
// PSX def: unsigned char BSTYPES[206]
//
// TODO: Figure out how to fix broken links. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/base.md
l1_tile_id l1_base[207];

// address: 0x479DF8
//
// l1_plain maps tile IDs to their corresponding undecorated tile ID.
//
// PSX ref: 0x8013A224
// PSX def: unsigned char L5BTYPES[206]
//
// TODO: Figure out how to fix broken link. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/README.md
l1_tile_id l1_plain[207];

// address: 0x479EC8
//
// l1_stair_up1 is a 4x4 miniset of tile IDs representing a staircase going up.
//
// PSX ref: 0x8013A2F4
// PSX def: unsigned char STAIRSUP[34]
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair_up1[34];

// address: 0x479EEC
//
// l1_stair_up2 is a 4x4 miniset of tile IDs representing a staircase going up.
//
// PSX ref: 0x8013A318
// PSX def: unsigned char L5STAIRSUP[34]
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair_up2[34];

// address: 0x479F10
//
// l1_stair_down is a 4x3 miniset of tile IDs representing a staircase going
// down.
//
// PSX ref: 0x8013A33C
// PSX def: unsigned char STAIRSDOWN[26]
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair_down[26];

// address: 0x479F2C
//
// l1_candlestick is a 2x2 miniset of tile IDs representing a candlestick.
//
// PSX ref: 0x8013A358
// PSX def: unsigned char LAMPS[10]
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_candlestick[10];

// address: 0x479F38
//
// PSX ref: 0x8013A364
// PSX def: unsigned char PWATERIN[74]
//
// l1_stair_down_poison is a 6x6 miniset of tile IDs representing a staircase
// going down to the Poisoned Water Supply.
//
// Minisets specifies how to arrange tile IDs in order to form set areas of
// dungeons (e.g. staircases). Below follows a pseudo-code description of the
// miniset format.
//
//    // A miniset defines the set area of a dungeon in terms of before and
//    // after areas of tile IDs.
//    type miniset struct {
//       // Width of miniset area.
//       width uint8
//       // Height of miniset area.
//       height uint8
//       // Tile IDs before transformation.
//       before [width][height]uint8
//       // Tile IDs after transformation.
//       after [width][height]uint8
//    }
uint8_t l1_stair_down_poison[74];
