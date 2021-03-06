// Copyright (C) University of Oxford 2010
#ifndef _DEPPARSER_IMPL_INCLUDE_H
#define _DEPPARSER_IMPL_INCLUDE_H

#include "agenda.h"
#include "pair_stream.h"

#include "learning/perceptron/hashmap_score_packed.h"

#include "bigram.h"
#include "tuple2.h"
#include "tuple3.h"
#include "tuple4.h"

#include "linguistics/lemma.h"

#ifdef PUNCT
#include "charcat.h"
#endif

namespace TARGET_LANGUAGE {
namespace depparser {
#ifdef LABELED
const unsigned DEP_LABEL_COUNT= CDependencyLabel::MAX_COUNT;
#else
const unsigned DEP_LABEL_COUNT = 1;
#endif

#include "action.h"
}
}

typedef CBigram< CTaggedWord<TARGET_LANGUAGE::CTag, TARGET_LANGUAGE::TAG_SEPARATOR> > CTwoTaggedWords; 




#endif
