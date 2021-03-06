/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject;

@interface TCMessageContext : NSObject {

	NSMutableSet* m_warnings;
	NSMutableSet* m_errors;
	NSMutableArray* m_currentObjectStack;
	NSMutableDictionary* m_placeholderToObjectMap;
	NSObject*<OS_dispatch_queue> mMessageSyncQueue;

}
+(void)initialize;
+(void)reportObjectOrPlaceholder:(id)arg1 withWarning:(TCTaggedMessageStructure*)arg2 parameters:(void*)arg3 ;
+(id)currentObjectOrPlaceholder;
+(void)reportWarningsToDelegate;
+(void)popCurrentPlaceholder:(id)arg1 ;
+(void)popCurrentObject;
+(void)reportObject:(id)arg1 withWarning:(TCTaggedMessageStructure*)arg2 ;
+(void)reportError:(TCTaggedMessageStructure*)arg1 ;
+(void)reportWarningException:(id)arg1 ;
+(void)reportErrorException:(id)arg1 ;
+(void)createContextForCurrentThread;
+(void)removeContextForCurrentThread;
+(id)getWarningArray;
+(id)getErrorArray;
+(void)setIsFileStructuredStorage:(char)arg1 ;
+(char)isFileStructuredStorage;
+(void)pushCurrentObject:(id)arg1 ;
+(id)pushCurrentPlaceholder;
+(void)setObject:(id)arg1 forPlaceholder:(id)arg2 ;
+(void)replacePlaceholdersWithObjects;
+(unsigned)saveObjectStack;
+(void)restoreObjectStack:(unsigned)arg1 ;
+(void)reportWarning:(TCTaggedMessageStructure*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reportWarningForObject:(id)arg1 warning:(TCTaggedMessageStructure*)arg2 parameterList:(void*)arg3 ;
-(id)currentObject;
-(void)addErrorMessageEntry:(id)arg1 ;
-(void)addWarningMessageEntry:(id)arg1 ;
-(void)pushObject:(id)arg1 ;
-(void)popObject;
-(id)pushPlaceholder;
-(void)popPlaceholder:(id)arg1 ;
-(void)setObject:(id)arg1 forPlaceholderKey:(id)arg2 dispatchSync:(char)arg3 ;
-(void)replacePlaceholdersWithObjects:(char)arg1 ;
-(void)reportWarningsToDelegate;
@end

