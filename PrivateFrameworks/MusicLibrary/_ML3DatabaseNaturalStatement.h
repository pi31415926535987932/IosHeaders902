/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface _ML3DatabaseNaturalStatement : NSObject {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,retain) NSString * sql;                           //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(id)init;
-(NSMutableArray *)parameters;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSString *)sql;
-(void)setParameter:(id)arg1 forPosition:(unsigned)arg2 ;
-(void)setSql:(NSString *)arg1 ;
@end

