/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAppSwitcherPageContentView.h"

@class SBAppSwitcherStatusBarViewCache, UIView, FBWindowContextHostManager, NSString, SBRemoteAlertAdapter, SBWallpaperEffectView;
@protocol FBWindowContextAppearance, SBAppSwitcherCacheVended;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherRemoteAlertContextHostWrapperView : XXUnknownSuperclass <SBAppSwitcherPageContentView> {
	UIView* _containerView;
	SBWallpaperEffectView* _wallpaperView;
	UIView<SBAppSwitcherCacheVended>* _fakeStatusBarView;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	SBRemoteAlertAdapter* _remoteAlert;
	FBWindowContextHostManager* _contextHostManager;
	UIView<FBWindowContextAppearance>* _contextHostView;
	int _orientation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int orientation;
-(void)_layoutStatusBar;
-(CGAffineTransform)_rotationTransformForOrientation:(int)orientation;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame remoteAlert:(id)alert statusBarCache:(id)cache contextHostManager:(id)manager;
@end

