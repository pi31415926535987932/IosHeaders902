/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NCViewServiceDescriptor;


@protocol NCInteractiveNotificationHost <NSObject>
@property (assign,nonatomic) id<NCInteractiveNotificationHostDelegate> delegate; 
@property (nonatomic,readonly) char showsKeyboard; 
@property (nonatomic,readonly) float bottomOverhangHeight; 
@property (assign,getter=isModal,nonatomic) char modal; 
@property (assign,nonatomic) float maximumHeight; 
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * inlayViewService; 
@property (nonatomic,retain,readonly) NCViewServiceDescriptor * accessoryViewService; 
@optional
-(void)disconnect;

@required
-(void)setModal:(char)arg1;
-(char)isModal;
-(void)setMaximumHeight:(float)arg1;
-(float)maximumHeight;
-(void)setDelegate:(id)arg1;
-(id<NCInteractiveNotificationHostDelegate>)delegate;
-(char)showsKeyboard;
-(void)handleActionAtIndex:(int)arg1;
-(float)bottomOverhangHeight;
-(NCViewServiceDescriptor *)inlayViewService;
-(NCViewServiceDescriptor *)accessoryViewService;
-(void)interactiveNotificationDidAppear;
-(void)didChangeRevealPercent:(float)arg1;
-(void)handleActionIdentifier:(id)arg1;
-(void)willPresentFromActionIdentifier:(id)arg1;
-(void)getActionContextWithCompletion:(/*^block*/id)arg1;

@end
