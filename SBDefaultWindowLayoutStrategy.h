/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWindowLayoutStrategy.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBDefaultWindowLayoutStrategy : XXUnknownSuperclass <SBWindowLayoutStrategy> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedInstance;
-(int)jailBehavior;
-(CGRect)frameForWindow:(id)window;
@end
