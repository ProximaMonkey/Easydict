//
//  EZLinkButton.h
//  Easydict
//
//  Created by tisfeng on 2022/12/6.
//  Copyright © 2022 izual. All rights reserved.
//

#import "EZHoverButton.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZLinkButton : EZHoverButton

@property (nonatomic, copy) NSString *link;

- (void)openLink;

@end

NS_ASSUME_NONNULL_END