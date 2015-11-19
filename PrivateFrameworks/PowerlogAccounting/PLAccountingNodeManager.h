/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PLAccountingNodeManager : NSObject {

	NSMutableDictionary* _nodeNameToNodeID;
	NSMutableDictionary* _nodeIDToNodeName;

}

@property (retain) NSMutableDictionary * nodeNameToNodeID;              //@synthesize nodeNameToNodeID=_nodeNameToNodeID - In the implementation block
@property (retain) NSMutableDictionary * nodeIDToNodeName;              //@synthesize nodeIDToNodeName=_nodeIDToNodeName - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)childNodeIDsFromChildNodeNames:(id)arg1 ;
-(id)nodeIDForNodeName:(id)arg1 isPermanent:(char)arg2 ;
-(void)setupNodes;
-(NSMutableDictionary *)nodeNameToNodeID;
-(void)setNodeNameToNodeID:(NSMutableDictionary *)arg1 ;
-(void)setNodeIDToNodeName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)nodeIDToNodeName;
-(id)nodeNameForNodeID:(id)arg1 ;
@end

