/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/TCCancelDelegate.h>

@class NSString;

@interface OCCancel : NSObject <TCCancelDelegate> {

	char mIsCancelled;
	char mIsQuit;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)init;
-(char)isCancelled;
-(char)isQuit;
-(void)quit;
@end

