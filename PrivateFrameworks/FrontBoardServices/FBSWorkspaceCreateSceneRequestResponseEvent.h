/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class NSString;

@interface FBSWorkspaceCreateSceneRequestResponseEvent : FBSWorkspaceEvent {

	NSString* _sceneID;

}

@property (nonatomic,copy) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(void)dealloc;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setSceneID:(NSString *)arg1 ;
-(NSString *)sceneID;
@end

