/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSUpdateRequest : HSRequest {

	int _connectionType;

}
+(id)requestWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(int)arg3 ;
-(char)isConcurrent;
-(id)initWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(int)arg3 ;
-(id)_bodyDataForDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(double)timeoutInterval;
@end
