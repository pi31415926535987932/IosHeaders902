/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask {

	NSArray* _pushedMoveRequests;
	int _dataclass;
	NSMutableArray* _moveItems;

}

@property (nonatomic,retain) NSArray * pushedMoveRequests;              //@synthesize pushedMoveRequests=_pushedMoveRequests - In the implementation block
@property (assign,nonatomic) int dataclass;                             //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,retain) NSMutableArray * moveItems;                //@synthesize moveItems=_moveItems - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(int)dataclass;
-(NSArray *)pushedMoveRequests;
-(void)setPushedMoveRequests:(NSArray *)arg1 ;
-(void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3 ;
-(NSMutableArray *)moveItems;
-(void)setMoveItems:(NSMutableArray *)arg1 ;
-(void)setDataclass:(int)arg1 ;
@end

