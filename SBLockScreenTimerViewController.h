/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BBObserverDelegate.h"

@class NSString, BBObserver, NSDate, BBBulletin, NSTimer;
@protocol SBLockScreenTimerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenTimerViewController : XXUnknownSuperclass <BBObserverDelegate> {
	BOOL _enabled;
	NSTimer* _updateTimer;
	NSDate* _endDate;
	BBObserver* _observer;
	id<SBLockScreenTimerViewControllerDelegate> _delegate;
	BBBulletin* _timerBulletin;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain) BBBulletin* timerBulletin;
@property(assign) id<SBLockScreenTimerViewControllerDelegate> delegate;
-(void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)setContentAlpha:(float)alpha;
-(void)_updateTimerLabelView;
-(void)_updateTimerFired;
-(void)_startTimer;
-(void)_stopTimer;
-(BOOL)_isEndDateValid;
-(id)timerView;
-(void)setEndDate:(id)date;
-(void)setTimerHidden:(BOOL)hidden;
-(BOOL)isTimerActive;
-(void)setEnabled:(BOOL)enabled;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

