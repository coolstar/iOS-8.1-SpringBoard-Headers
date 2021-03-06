/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconImageView.h"
#import "SBControlCenterObserver.h"
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBLiveIconImageView : SBIconImageView <SBControlCenterObserver> {
	unsigned _pauseCauses;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)_applicationDidExit:(id)_application;
+(void)_displayDidDeactivate:(id)_display;
+(void)_displayWillActivate:(id)_display;
+(void)initialize;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)_significantAnimationDidEnd:(id)_significantAnimation;
-(void)_significantAnimationWillBegin:(id)_significantAnimation;
-(void)_activeDisplayChanged:(id)changed;
-(void)_didEndScrolling:(id)scrolling;
-(void)_willBeginScrolling:(id)scrolling;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(id)snapshot;
-(void)prepareForReuse;
-(void)updateImageAnimated:(BOOL)animated;
-(void)updateUnanimated;
-(void)updateAnimatingState;
-(void)setPaused:(BOOL)paused;
-(void)_removePauseCause:(unsigned)cause;
-(void)_addPauseCause:(unsigned)cause;
-(BOOL)_isPausedForCause:(unsigned)cause;
-(id)_stringForPauseCause:(unsigned)pauseCause;
-(BOOL)isAnimationAllowed;
-(void)setIcon:(id)icon location:(int)location animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

