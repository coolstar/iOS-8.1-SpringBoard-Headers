/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBDisableAppStatusBarAlphaChangesAssertion, UIView;

__attribute__((visibility("hidden")))
@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {
	SBAlert* _fromAlert;
	UIView* _viewToAnimate;
	UIView* _contextHostView;
	UIView* _fakeStatusBarViewContainer;
	int _launchingOrientation;
	BOOL _requiresHostView;
	BOOL _activateBeforeHosting;
	BOOL _fromAssistant;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;
}
-(void)_removeFakeStatusBarIfNecessary;
-(void)_showFakeStatusBarIfNecessary;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_maybeReportAnimationFinished;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeStartCrossfade;
-(void)_finishedZooming;
-(void)_applicationDependencyStateChanged;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_cleanupAnimation;
-(void)_doAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(id)_animationProgressDependency;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)_setHidden:(BOOL)hidden;
-(BOOL)_shouldDismissBanner;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp fromAlert:(id)alert;
-(id)_getTransitionWindow;
@end
