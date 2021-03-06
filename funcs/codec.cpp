// address: 0x4034D9
//
// codec_decode decodes the given memory buffer in-place, and returns the number
// of bytes decoded.
int __fastcall codec_decode(void *src_dst, int size, char *password);

// address: 0x4035D6
//
// j_sha1_reset resets the global SHA-1 contexts.
void j_sha1_reset();

// address: 0x4035DB
//
// codec_init_key initializes the codec key.
void __fastcall codec_init_key(int unused, char *password);

// address: 0x4036AC
//
// codec_get_encoded_len returns the length in bytes of the codec encoding of an
// input buffer of length n.
int __fastcall codec_get_encoded_len(int n);

// address: 0x4036BE
//
// codec_encode encodes the given memory buffer in-place.
void __fastcall codec_encode(void *src_dst, int size, int size_64, char *password);
