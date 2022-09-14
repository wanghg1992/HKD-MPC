/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __hkd_problem_data_lcm_t_hpp__
#define __hkd_problem_data_lcm_t_hpp__

#include <lcm/lcm_coretypes.h>

#include <vector>


class hkd_problem_data_lcm_t
{
    public:
        int32_t    n_timesteps;

        std::vector< std::vector< float > > contacts;

        std::vector< float > times;

        std::vector< std::vector< float > > pos_r;

        std::vector< std::vector< float > > eul_r;

        std::vector< std::vector< float > > vel_r;

        std::vector< std::vector< float > > omega_r;

        std::vector< std::vector< float > > qdummy_r;

        std::vector< std::vector< float > > pos;

        std::vector< std::vector< float > > eul;

        std::vector< std::vector< float > > vel;

        std::vector< std::vector< float > > omega;

        std::vector< std::vector< float > > qdummy;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "hkd_problem_data_lcm_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int hkd_problem_data_lcm_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int hkd_problem_data_lcm_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int hkd_problem_data_lcm_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t hkd_problem_data_lcm_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* hkd_problem_data_lcm_t::getTypeName()
{
    return "hkd_problem_data_lcm_t";
}

int hkd_problem_data_lcm_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->n_timesteps, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 4; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->contacts[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->times[0], this->n_timesteps);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->pos_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->eul_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->vel_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->omega_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 12; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->qdummy_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->pos[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->eul[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->vel[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 3; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->omega[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps > 0) {
        for (int a0 = 0; a0 < 12; a0++) {
            tlen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->qdummy[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    return pos;
}

int hkd_problem_data_lcm_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->n_timesteps, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->contacts.resize(4);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 4; a0++) {
        if(this->n_timesteps) {
            this->contacts[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->contacts[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    if(this->n_timesteps) {
        this->times.resize(this->n_timesteps);
        tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->times[0], this->n_timesteps);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    try {
        this->pos_r.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->pos_r[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->pos_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->eul_r.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->eul_r[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->eul_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->vel_r.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->vel_r[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->vel_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->omega_r.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->omega_r[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->omega_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->qdummy_r.resize(12);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 12; a0++) {
        if(this->n_timesteps) {
            this->qdummy_r[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->qdummy_r[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->pos.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->pos[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->pos[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->eul.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->eul[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->eul[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->vel.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->vel[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->vel[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->omega.resize(3);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 3; a0++) {
        if(this->n_timesteps) {
            this->omega[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->omega[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    try {
        this->qdummy.resize(12);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < 12; a0++) {
        if(this->n_timesteps) {
            this->qdummy[a0].resize(this->n_timesteps);
            tlen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->qdummy[a0][0], this->n_timesteps);
            if(tlen < 0) return tlen; else pos += tlen;
        }
    }

    return pos;
}

int hkd_problem_data_lcm_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += 4 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 12 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 3 * __float_encoded_array_size(NULL, this->n_timesteps);
    enc_size += 12 * __float_encoded_array_size(NULL, this->n_timesteps);
    return enc_size;
}

uint64_t hkd_problem_data_lcm_t::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x0baab93fbdfb118dLL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
