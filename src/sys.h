/** @file
 * @brief System-related function definitions
 */
//
// Created by Matteo Tenca on 26/09/2022.
//

#ifndef SYS_H
#define SYS_H

#include "common.h"

#ifndef SERVER
int resources_list(struct MEM_PROFILE *, struct VOLUME_PROFILE *);
#endif
int get_memory_usage(struct MEM_PROFILE *, char *return_message);
struct VOLUME_PROFILE *search_volumes_targets(char *return_message);

#endif //SYS_H
