/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBannerGestureHandler.h"


__attribute__((visibility("hidden")))
@interface SBBannerToNotificationCenterGestureHandler : SBBannerGestureHandler {
	BOOL _canPullDown;
	BOOL _didPreparePullDown;
	CGSize _rootSize;
	CGSize _pullDownSize;
	CGRect _pullDownTargetRect;
	float _bannerHeight;
	BOOL _bannerHidden;
	BOOL _shouldObscure;
}
-(void)_updateWithDisplacement:(float)displacement velocity:(float)velocity;
-(BOOL)handleGestureType:(int)type state:(int)state location:(CGPoint)location displacement:(float)displacement velocity:(float)velocity;
@end

