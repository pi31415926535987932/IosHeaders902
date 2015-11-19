/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCContentServiceInterface.h>

@class NSDictionary;

@interface NCContentViewController : UIViewController <NCContentServiceInterface> {

	NSDictionary* _context;

}

@property (nonatomic,copy) NSDictionary * context;              //@synthesize context=_context - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)_setContext:(id)arg1 ;
-(void)_getPreferredContentSizeWithCompletion:(/*^block*/id)arg1 ;
@end

