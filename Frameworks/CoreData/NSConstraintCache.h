/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSEntityDescription, NSMutableDictionary, NSMutableArray;

@interface NSConstraintCache : NSObject {

	NSArray* _constraint;
	NSArray* _extension;
	NSEntityDescription* _entity;
	NSMutableDictionary* _knownValues;
	NSMutableArray* _children;

}

@property (nonatomic,retain,readonly) NSArray * constraint;               //@synthesize constraint=_constraint - In the implementation block
@property (nonatomic,retain,readonly) NSArray * extension;                //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,retain,readonly) NSArray * children;                 //@synthesize children=_children - In the implementation block
+(void)createCachesForEntity:(id)arg1 forValidator:(id)arg2 ;
-(NSArray *)constraint;
-(void)registerObject:(id)arg1 ;
-(id)validateForSave:(id)arg1 ;
-(char)_constraint:(id)arg1 extends:(id)arg2 ;
-(char)_alreadyHasChildForEntity:(id)arg1 constraint:(id)arg2 ;
-(id)initForEntity:(id)arg1 constraint:(id)arg2 extension:(id)arg3 ;
-(void)_addChild:(id)arg1 ;
-(void)extendConstraint:(id)arg1 onParentEntity:(id)arg2 parentCache:(id)arg3 ;
-(id)keyForValues:(id)arg1 ;
-(void)registerObject:(id)arg1 forValues:(id)arg2 ;
-(char)_intraStoreConflictsExistForValues:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(NSArray *)extension;
-(NSEntityDescription *)entity;
-(NSArray *)children;
@end

