/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:52:30 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@protocol ADAdSpaceRemoteViewControllerDelegate;
@interface ADAdSpaceRemoteViewController : _UIRemoteViewController {

	id<ADAdSpaceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ADAdSpaceRemoteViewControllerDelegate> delegate; 
+(id)serviceViewControllerInterface;
+(void)adSpaceRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<ADAdSpaceRemoteViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ADAdSpaceRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

