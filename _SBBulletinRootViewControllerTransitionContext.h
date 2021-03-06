/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIViewControllerContextTransitioning.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _SBBulletinRootViewControllerTransitionContext : XXUnknownSuperclass <UIViewControllerContextTransitioning> {
	BOOL _animated;
	BOOL _presenting;
	UIView* _containerView;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	id _presentationCompletion;
	id _dismissalCompletion;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id dismissalCompletion;
@property(copy, nonatomic) id presentationCompletion;
@property(retain, nonatomic) UIViewController* presentedViewController;
@property(retain, nonatomic) UIViewController* presentingViewController;
@property(assign, nonatomic, getter=isPresenting) BOOL presenting;
@property(assign, nonatomic, getter=isAnimated) BOOL animated;
@property(retain, nonatomic) UIView* containerView;
-(CGRect)finalFrameForViewController:(id)viewController;
-(CGRect)initialFrameForViewController:(id)viewController;
-(CGAffineTransform)targetTransform;
-(id)viewForKey:(id)key;
-(id)viewControllerForKey:(id)key;
-(void)completeTransition:(BOOL)transition;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(float)transition;
-(int)presentationStyle;
-(BOOL)transitionWasCancelled;
-(BOOL)isInteractive;
-(void)dealloc;
@end

