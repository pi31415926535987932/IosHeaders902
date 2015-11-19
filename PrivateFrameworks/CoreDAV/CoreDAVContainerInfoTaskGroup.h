/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>

@class NSMutableSet, NSString, NSSet;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	int _phase;
	NSMutableSet* _containerURLs;
	NSMutableSet* _containers;
	int _containerInfoDepth;
	NSString* _appSpecificHomeSetPropNameSpace;
	NSString* _appSpecificHomeSetPropName;

}

@property (assign,nonatomic) int containerInfoDepth;                                          //@synthesize containerInfoDepth=_containerInfoDepth - In the implementation block
@property (assign,nonatomic) id<CoreDAVContainerInfoTaskGroupDelegate> delegate; 
@property (nonatomic,readonly) NSSet * containerURLs;                                         //@synthesize containerURLs=_containerURLs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)startTaskGroup;
-(id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 taskManager:(id)arg3 ;
-(id)_copyContainerParserMappings;
-(id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(int)containerInfoDepth;
-(int)containerInfoDepthForURL:(id)arg1 ;
-(void)setContainerInfoDepth:(int)arg1 ;
-(void)_getContainerTopLevelInfo;
-(void)_getContainerHomeSet;
-(NSSet *)containerURLs;
@end

