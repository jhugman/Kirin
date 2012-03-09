//
//  KirinImageTransformer.h
//  KirinKit
//
//  Created by James Hugman on 08/03/2012.
//  Copyright (c) 2012 Future Platforms. All rights reserved.
//

#import "KirinServiceStub.h"
#import "ImageTransformProtocol.h"

@interface KirinImageTransformer : KirinServiceStub <ImageTransformProtocol>

+ (KirinImageTransformer*) instance;

@end
