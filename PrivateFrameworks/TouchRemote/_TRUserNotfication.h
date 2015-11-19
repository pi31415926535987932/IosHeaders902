/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TouchRemote/TouchRemote-Structs.h>
@interface _TRUserNotfication : NSObject {

	CFUserNotificationRef _userNotification;
	long _response;
	unsigned long _responseFlags;

}

@property (nonatomic,readonly) CFUserNotificationRef CFUserNotification; 
@property (nonatomic,readonly) long response;                                         //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned long responseFlags;                           //@synthesize responseFlags=_responseFlags - In the implementation block
-(void)cancel;
-(void)show;
-(void)dealloc;
-(long)response;
-(unsigned long)responseFlags;
-(id)initWithDictionary:(id)arg1 options:(unsigned long)arg2 error:(int*)arg3 ;
-(CFUserNotificationRef)CFUserNotification;
@end
