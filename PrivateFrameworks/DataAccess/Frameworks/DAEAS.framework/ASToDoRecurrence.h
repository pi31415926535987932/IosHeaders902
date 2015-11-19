/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASRecurrence.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSNumber, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {

	NSDate* _startTime;
	NSNumber* _regenerate;
	NSNumber* _deadOccur;
	ASToDo* _parentToDo;

}

@property (nonatomic,retain) NSDate * startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSNumber * regenerate;                   //@synthesize regenerate=_regenerate - In the implementation block
@property (nonatomic,retain) NSNumber * deadOccur;                    //@synthesize deadOccur=_deadOccur - In the implementation block
@property (assign,nonatomic,__weak) ASToDo * parentToDo;              //@synthesize parentToDo=_parentToDo - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)initWithCalRecurrence:(void*)arg1 parentToDo:(id)arg2 ;
-(void)setDeadOccur:(NSNumber *)arg1 ;
-(void)saveToCalendarWithParentASToDo:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(void)setParentToDo:(ASToDo *)arg1 ;
-(void)setUntilString:(id)arg1 ;
-(void)setStartTimeString:(id)arg1 ;
-(void)setRegenerate:(NSNumber *)arg1 ;
-(ASToDo *)parentToDo;
-(NSNumber *)regenerate;
-(NSNumber *)deadOccur;
-(char)_requiresParentEvent;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1 ;
-(id)_transformedUntilDateForActiveSync:(id)arg1 ;
@end

