/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface DAResponse : DAAction {

	int _status;

}

@property (assign,nonatomic) int status;              //@synthesize status=_status - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(int)arg4 ;
@end

