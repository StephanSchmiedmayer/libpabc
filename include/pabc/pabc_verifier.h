/**
 * Copyright (c) 2021 Fraunhofer AISEC
 *
 * SPDX-License-Identifier: Apache-2.0
 **/





#ifndef PABC_VERIFIER_H
#define PABC_VERIFIER_H

#include "pabc_utils.h"

struct pabc_context;
struct pabc_public_parameters;
struct pabc_attribute_predicates_D_I;
struct pabc_nonce;
struct pabc_blinded_proof;

/*!
 * Verifies a blinded proof (generated by ::pabc_gen_proof). Nonce must be
 * checked by caller.
 *
 * \param [in,out] ctx The global context to use.
 * \param [in] public_parameters The public parameters to use (number of
 * attributes).
 * \param [in,out] proof The proof to verify.
 * \param [in] nonce_verified_by_caller The caller must check the nonce in order
 * to protect against reply attacks. Set this to PABC_OK iff the check was ok.
 * \return Success status.
 */
enum pabc_status pabc_verify_blinded_proof_no_nonce (
  struct pabc_context *const ctx,
  struct pabc_public_parameters *const public_parameters,
  struct pabc_blinded_proof *const proof,
  enum pabc_status nonce_verified_by_caller);

/*!
 * Verifies a blinded proof (generated by ::pabc_gen_proof).
 *
 * \param [in,out] ctx The global context to use.
 * \param [in] public_parameters The public parameters to use (number of
 * attributes).
 * \param [in] nonce The nonce to expect.
 * \param [in,out] proof The proof to verify.
 * \return Success status.
 */
enum pabc_status pabc_verify_blinded_proof (
  struct pabc_context *const ctx,
  struct pabc_public_parameters *const public_parameters,
  struct pabc_nonce *const nonce, struct pabc_blinded_proof *const proof);

#endif // PABC_VERIFIER_H
