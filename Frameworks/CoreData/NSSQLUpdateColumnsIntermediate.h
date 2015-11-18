/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {

	NSArray* _propertiesToUpdate;
	NSArray* _valuesToUpdateTo;

}
-(char)isDestination:(id)arg1 compatibleDestinationFor:(id)arg2 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(char)isRelationship:(id)arg1 compatibleWith:(id)arg2 ;
-(id)_subqueryIntermediateForToManyKeypathWithComponents:(id)arg1 withFunction:(char)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForKeypathWithComponents:(id)arg1 onSQLEntity:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 sourceRelationship:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForAttributeUpdate:(id)arg1 sourceAttribute:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromMultiStepKeypathComponents:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromSingleStepKeypath:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 destination:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForAttributeUpdate:(id)arg1 value:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromKeypath:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromSubquery:(id)arg2 inContext:(id)arg3 ;
-(id)initWithProperties:(id)arg1 values:(id)arg2 inScope:(id)arg3 ;
-(char)isUpdateColumnsScoped;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(void)dealloc;
@end

