/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ML3MusicLibrary, ML3Predicate, NSArray, NSString, ML3AggregateQuery;

@interface ML3Query : NSObject <NSCoding, NSCopying> {

	ML3MusicLibrary* _library;
	Class _entityClass;
	ML3Predicate* _predicate;
	NSArray* _orderingTerms;
	NSString* _propertyToCount;
	ML3AggregateQuery* _nonDirectAggregateQuery;
	char _usingSections;
	long long _options;
	char _filtersOnDynamicProperties;
	unsigned _limit;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                                          //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                                  //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicateIncludingSystemwidePredicates; 
@property (nonatomic,readonly) NSArray * orderingTerms;                                            //@synthesize orderingTerms=_orderingTerms - In the implementation block
@property (nonatomic,readonly) NSString * propertyToCount;                                         //@synthesize propertyToCount=_propertyToCount - In the implementation block
@property (nonatomic,readonly) char hasEntities; 
@property (nonatomic,readonly) long long anyEntityPersistentID; 
@property (nonatomic,readonly) unsigned countOfEntities; 
@property (nonatomic,readonly) ML3AggregateQuery * nonDirectAggregateQuery;                        //@synthesize nonDirectAggregateQuery=_nonDirectAggregateQuery - In the implementation block
@property (nonatomic,readonly) NSString * sectionProperty; 
@property (nonatomic,readonly) char usingSections;                                                 //@synthesize usingSections=_usingSections - In the implementation block
@property (assign,nonatomic) unsigned limit;                                                       //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) char ignoreSystemFilterPredicates; 
@property (assign,nonatomic) char ignoreRestrictionsPredicates; 
@property (nonatomic,readonly) long long options;                                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSString * selectPersistentIDsSQL; 
@property (nonatomic,readonly) NSString * selectCountSQL; 
@property (nonatomic,readonly) NSString * persistentIDProperty; 
@property (nonatomic,readonly) char filtersOnDynamicProperties;                                    //@synthesize filtersOnDynamicProperties=_filtersOnDynamicProperties - In the implementation block
-(long long)anyEntityPersistentID;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(char)arg2 usingBlock:(/*^block*/id)arg3 ;
-(ML3MusicLibrary *)library;
-(char)ignoreSystemFilterPredicates;
-(void)setIgnoreSystemFilterPredicates:(char)arg1 ;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(char)hasEntities;
-(unsigned)countOfEntities;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(char)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(Class)entityClass;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ML3Predicate *)predicate;
-(long long)options;
-(id)sections;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(char)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 options:(long long)arg8 ;
-(NSArray *)orderingTerms;
-(ML3AggregateQuery *)nonDirectAggregateQuery;
-(NSString *)propertyToCount;
-(char)usingSections;
-(char)ignoreRestrictionsPredicates;
-(void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(char)arg4 cancelHandler:(/*^block*/id)arg5 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned)arg3 ;
-(id)persistentIDParameters;
-(char)hasRowForColumn:(id)arg1 ;
-(unsigned)countOfDistinctRowsForColumn:(id)arg1 ;
-(char)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 ;
-(id)selectSectionsSQL;
-(NSString *)sectionProperty;
-(id)sectionsParameters;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(char)arg2 sectionProperty:(id)arg3 cancelBlock:(/*^block*/id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)nameOrderPropertyForProperty:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(char)arg2 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(char)arg5 distinct:(char)arg6 limit:(unsigned)arg7 ;
-(ML3Predicate *)predicateIncludingSystemwidePredicates;
-(NSString *)persistentIDProperty;
-(char)sectionsPersistentIDColumnIsDistinct;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned)arg4 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(char)arg2 distinct:(char)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(char)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(char)arg3 ;
-(void)setIgnoreRestrictionsPredicates:(char)arg1 ;
-(id)reverseQuery;
-(char)deleteAllEntitiesFromLibrary;
-(char)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2 ;
-(void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(char)arg5 ;
-(id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2 ;
-(id)selectUnorderedPersistentIDsSQL;
-(NSString *)selectPersistentIDsSQL;
-(NSString *)selectCountSQL;
-(id)countStatementParameters;
-(char)filtersOnDynamicProperties;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
@end
