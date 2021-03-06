//
//  BNDBindingListDataController.h
//  BINDPlugin
//
//  Created by Marko Hlebar on 29/11/2014.
//  Copyright (c) 2014 Marko Hlebar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BIND.h"

@class BNDBindingDefinitionFactory;
@class BNDInterfaceBuilderWriter;
@interface BNDBindingListDataController : NSObject <BNDDataController>
@property (nonatomic, strong, readonly) BNDInterfaceBuilderWriter *bindingWriter;
- (void)createBinding;
- (void)write;
@end
