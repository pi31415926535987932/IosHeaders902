/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DataAccess-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface DAAction : NSObject <NSCoding> {

	int _itemChangeType;
	id _serverId;
	id _instanceId;
	id _changedItem;
	int _changeId;

}

@property (assign,nonatomic) int itemChangeType;              //@synthesize itemChangeType=_itemChangeType - In the implementation block
@property (nonatomic,retain) id serverId;                     //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,retain) id instanceId;                   //@synthesize instanceId=_instanceId - In the implementation block
@property (nonatomic,retain) id changedItem;                  //@synthesize changedItem=_changedItem - In the implementation block
@property (assign,nonatomic) int changeId;                    //@synthesize changeId=_changeId - In the implementation block
-(ASContact*)contact;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(ASEvent*)event;
-(id)message;
-(id)deletedEventID;
-(id)deletedContactID;
-(id)stringForItemChangeType:(int)arg1 ;
-(int)changeId;
-(void)setItemChangeType:(int)arg1 ;
-(void)_setChangedItem:(id)arg1 ;
-(void)setInstanceId:(id)arg1 ;
-(void)setChangeId:(int)arg1 ;
-(id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4 ;
-(id)deletedToDoID;
-(ASToDo*)toDo;
-(id)deletedNoteID;
-(void)setServerId:(id)arg1 ;
-(id)serverId;
-(id)changedItem;
-(id)instanceId;
-(int)itemChangeType;
-(id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3 ;
-(ASNote*)note;
@end

