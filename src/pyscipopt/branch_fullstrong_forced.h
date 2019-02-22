/*
 * This file is based on the "branch_fullstrong.h" file from the software
 * SCIP --- Solving Constraint Integer Programs, distributed by
 * Konrad-Zuse-Zentrum fuer Informationstechnik Berlin. For the original
 * source code and further information visit scip.zib.de.
 */

/**@file   branch_fullstrong_forced.h
 * @ingroup BRANCHINGRULES
 * @brief  full strong LP branching rule, forced branching version
 * @author Maxime Gasse
 *
 * The full strong branching rule applies strong branching to every fractional
 * variable of the LP solution at the current node of the branch-and-bound
 * search. The branching variable is selected as follows:
 * 1. if any, the first variable that proves node infeasibility (infeasible up and
 * down children);
 * 2. if any, the variable with best dual bound among those having only one
 * feasible child;
 * 3. the variable with best strong branching score.
 */

#ifndef __SCIP_BRANCH_FULLSTRONG_FORCED_H__
#define __SCIP_BRANCH_FULLSTRONG_FORCED_H__


#include "scip/def.h"
#include "scip/type_result.h"
#include "scip/type_retcode.h"
#include "scip/type_scip.h"
#include "scip/type_var.h"

#ifdef __cplusplus
extern "C" {
#endif

/** creates the full strong LP branching rule and includes it in SCIP
 *
 *  @ingroup BranchingRuleIncludes
 */
extern
SCIP_RETCODE SCIPincludeBranchruleFullstrongForced(
   SCIP*                 scip                /**< SCIP data structure */
   );

#ifdef __cplusplus
}
#endif

#endif