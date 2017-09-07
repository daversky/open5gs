#ifndef __MME_S11_PATH_H__
#define __MME_S11_PATH_H__

#include "core_pkbuf.h"

#include "mme_context.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(status_t) mme_gtp_open();
CORE_DECLARE(status_t) mme_gtp_close();

CORE_DECLARE(status_t) mme_gtp_send_modify_bearer_request(
        mme_bearer_t *bearer);
CORE_DECLARE(status_t) mme_gtp_send_create_bearer_response(
        mme_bearer_t *bearer);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MME_S11_PATH_H__ */