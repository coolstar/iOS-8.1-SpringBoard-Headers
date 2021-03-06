/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "NSCopying.h"
#import "SBUIQuietModePlayability.h"
#import "SBAwayListCellButtonHandler.h"

@class NSString, SBLockScreenActionContext, NSDate;

__attribute__((visibility("hidden")))
@interface SBAwayListItem : XXUnknownSuperclass <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying> {
	NSDate* _timestamp;
	BOOL _isNewItem;
	SBLockScreenActionContext* _lockScreenActionContext;
	NSString* _buttonLabel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isNewItem;
@property(retain, nonatomic) NSDate* timestamp;
@property(copy, nonatomic) NSString* buttonLabel;
-(BOOL)overridesQuietMode;
-(BOOL)isCritical;
-(BOOL)inertWhenLocked;
-(void)dealloc;
-(void)prepareWithCompletion:(id)completion;
-(BOOL)canBeClearedByNotificationCenter;
-(BOOL)wantsHighlightOnInsert;
-(void)buttonPressed;
-(id)copyWithZone:(NSZone*)zone;
@end

