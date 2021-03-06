/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface _UIDSMAlertViewDelegate : NSObject <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;

}

@property (copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

