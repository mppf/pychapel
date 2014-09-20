/* IO.chpl:1 */
static void chpl__init_IO(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t const_tmp;
  int32_t const_tmp2;
  int32_t const_tmp3;
  int32_t const_tmp4;
  chpl_string type_tmp;
  chpl_string ret;
  _ref_chpl_string _ref_tmp_ = NULL;
  chpl_string call_tmp;
  chpl_string type_tmp2;
  chpl_string ret2;
  _ref_chpl_string _ref_tmp_2 = NULL;
  chpl_string call_tmp2;
  chpl_string type_tmp3;
  chpl_string ret3;
  _ref_chpl_string _ref_tmp_3 = NULL;
  chpl_string call_tmp3;
  chpl_string type_tmp4;
  chpl_string ret4;
  _ref_chpl_string _ref_tmp_4 = NULL;
  chpl_string call_tmp4;
  c_string type_tmp_x1;
  chpl_string call_tmp5;
  _ref_c_string call_tmp6 = NULL;
  c_string call_tmp7;
  c_string type_tmp_x12;
  chpl_string call_tmp8;
  _ref_c_string call_tmp9 = NULL;
  c_string call_tmp10;
  chpl_string type_tmp5;
  chpl_string ret5;
  _ref_chpl_string _ref_tmp_5 = NULL;
  chpl_string call_tmp11;
  chpl_string call_tmp12;
  chpl_string call_tmp13;
  chpl_string call_tmp14;
  chpl_string call_tmp15;
  chpl_string call_tmp16;
  chpl_string call_tmp17;
  channel_F_dynamic_T type_tmp6;
  channel_F_dynamic_T this8;
  locale call_tmp18 = NULL;
  qio_channel_ptr_t default_arg_channel_internal;
  channel_F_dynamic_T wrap_call_tmp;
  file call_tmp19;
  int32_t call_tmp20;
  int32_t default_arghints;
  iostyle default_argstyle;
  _ref_iostyle ret_to_arg_ref_tmp_ = NULL;
  file wrap_call_tmp2;
  _ref_file ret_to_arg_ref_tmp_2 = NULL;
  file call_tmp21;
  _ref_file _destructor_tmp_ = NULL;
  channel_F_dynamic_T call_tmp22;
  _ref_file _ref_tmp_6 = NULL;
  int64_t default_argend;
  int32_t default_arghints2;
  iostyle default_argstyle2;
  _ref_iostyle ret_to_arg_ref_tmp_3 = NULL;
  channel_F_dynamic_T wrap_call_tmp3;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp_4 = NULL;
  channel_F_dynamic_T call_tmp23;
  _ref_channel_F_dynamic_T _destructor_tmp_2 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp_7 = NULL;
  _ref_channel_F_dynamic_T _destructor_tmp_3 = NULL;
  _ref_file _destructor_tmp_4 = NULL;
  channel_T_dynamic_T type_tmp7;
  channel_T_dynamic_T this9;
  locale call_tmp24 = NULL;
  qio_channel_ptr_t default_arg_channel_internal2;
  channel_T_dynamic_T wrap_call_tmp4;
  _cfile call_tmp25;
  file call_tmp26;
  int32_t default_arghints3;
  iostyle default_argstyle3;
  _ref_iostyle ret_to_arg_ref_tmp_5 = NULL;
  file wrap_call_tmp5;
  _ref_file ret_to_arg_ref_tmp_6 = NULL;
  file call_tmp27;
  _ref_file _destructor_tmp_5 = NULL;
  channel_T_dynamic_T call_tmp28;
  _ref_file _ref_tmp_8 = NULL;
  int64_t default_argend2;
  iostyle default_argstyle4;
  _ref_iostyle ret_to_arg_ref_tmp_7 = NULL;
  channel_T_dynamic_T wrap_call_tmp6;
  int32_t call_tmp29;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp_8 = NULL;
  channel_T_dynamic_T call_tmp30;
  _ref_channel_T_dynamic_T _destructor_tmp_6 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp_9 = NULL;
  _ref_channel_T_dynamic_T _destructor_tmp_7 = NULL;
  _ref_file _destructor_tmp_8 = NULL;
  channel_T_dynamic_T type_tmp8;
  channel_T_dynamic_T this10;
  locale call_tmp31 = NULL;
  qio_channel_ptr_t default_arg_channel_internal3;
  channel_T_dynamic_T wrap_call_tmp7;
  _cfile call_tmp32;
  file call_tmp33;
  int32_t default_arghints4;
  iostyle default_argstyle5;
  _ref_iostyle ret_to_arg_ref_tmp_9 = NULL;
  file wrap_call_tmp8;
  _ref_file ret_to_arg_ref_tmp_10 = NULL;
  file call_tmp34;
  _ref_file _destructor_tmp_9 = NULL;
  channel_T_dynamic_T call_tmp35;
  _ref_file _ref_tmp_10 = NULL;
  int64_t default_argend3;
  iostyle default_argstyle6;
  _ref_iostyle ret_to_arg_ref_tmp_11 = NULL;
  channel_T_dynamic_T wrap_call_tmp9;
  int32_t call_tmp36;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp_12 = NULL;
  channel_T_dynamic_T call_tmp37;
  _ref_channel_T_dynamic_T _destructor_tmp_10 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp_11 = NULL;
  _ref_channel_T_dynamic_T _destructor_tmp_11 = NULL;
  _ref_file _destructor_tmp_12 = NULL;
  if (chpl__init_IO_p) {
    goto _exit_chpl__init_IO;
  }
  modFormatStr = "%*s\n";
  modStr = "IO";
  printModuleInit(modFormatStr, modStr, INT64(2), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_IO_p = true;
  {
    chpl__init_SysBasic(_ln, _fn);
    chpl__init_Error(_ln, _fn);
    chpl__init_Regexp(_ln, _fn);
  }
  IOHINT_NONE = INT32(0);
  const_tmp = QIO_HINT_RANDOM;
  IOHINT_RANDOM = const_tmp;
  const_tmp2 = QIO_HINT_SEQUENTIAL;
  IOHINT_SEQUENTIAL = const_tmp2;
  const_tmp3 = QIO_HINT_CACHED;
  IOHINT_CACHED = const_tmp3;
  const_tmp4 = QIO_HINT_PARALLEL;
  IOHINT_PARALLEL = const_tmp4;
  ret = defaultStringValue;
  type_tmp = ret;
  _ref_tmp_ = &type_tmp;
  string_from_c_string(&call_tmp, "r", INT64(0), INT64(0), _ln, _fn);
  *(_ref_tmp_) = call_tmp;
  _r = type_tmp;
  ret2 = defaultStringValue;
  type_tmp2 = ret2;
  _ref_tmp_2 = &type_tmp2;
  string_from_c_string(&call_tmp2, "r+", INT64(0), INT64(0), _ln, _fn);
  *(_ref_tmp_2) = call_tmp2;
  _rw = type_tmp2;
  ret3 = defaultStringValue;
  type_tmp3 = ret3;
  _ref_tmp_3 = &type_tmp3;
  string_from_c_string(&call_tmp3, "w", INT64(0), INT64(0), _ln, _fn);
  *(_ref_tmp_3) = call_tmp3;
  _cw = type_tmp3;
  ret4 = defaultStringValue;
  type_tmp4 = ret4;
  _ref_tmp_4 = &type_tmp4;
  string_from_c_string(&call_tmp4, "w+", INT64(0), INT64(0), _ln, _fn);
  *(_ref_tmp_4) = call_tmp4;
  _cwr = type_tmp4;
  type_tmp_x1 = "";
  string_from_c_string(&call_tmp5, "true", INT64(0), INT64(0), _ln, _fn);
  call_tmp6 = &type_tmp_x1;
  c_string_from_string(&call_tmp7, &call_tmp5, _ln, _fn);
  *(call_tmp6) = call_tmp7;
  *(_trues + INT64(0)) = type_tmp_x1;
  type_tmp_x12 = "";
  string_from_c_string(&call_tmp8, "false", INT64(0), INT64(0), _ln, _fn);
  call_tmp9 = &type_tmp_x12;
  c_string_from_string(&call_tmp10, &call_tmp8, _ln, _fn);
  *(call_tmp9) = call_tmp10;
  *(_falses + INT64(0)) = type_tmp_x12;
  ret5 = defaultStringValue;
  type_tmp5 = ret5;
  _ref_tmp_5 = &type_tmp5;
  string_from_c_string(&call_tmp11, "i", INT64(0), INT64(0), _ln, _fn);
  *(_ref_tmp_5) = call_tmp11;
  _i = type_tmp5;
  string_from_c_string(&call_tmp12, "a", INT64(0), INT64(0), _ln, _fn);
  string_from_c_string(&call_tmp13, "b", INT64(0), INT64(0), _ln, _fn);
  string_from_c_string(&call_tmp14, "c", INT64(0), INT64(0), _ln, _fn);
  string_from_c_string(&call_tmp15, "d", INT64(0), INT64(0), _ln, _fn);
  string_from_c_string(&call_tmp16, "e", INT64(0), INT64(0), _ln, _fn);
  string_from_c_string(&call_tmp17, "f", INT64(0), INT64(0), _ln, _fn);
  *(_arg_to_proto_names + INT64(0)) = call_tmp12;
  *(_arg_to_proto_names + INT64(1)) = call_tmp13;
  *(_arg_to_proto_names + INT64(2)) = call_tmp14;
  *(_arg_to_proto_names + INT64(3)) = call_tmp15;
  *(_arg_to_proto_names + INT64(4)) = call_tmp16;
  *(_arg_to_proto_names + INT64(5)) = call_tmp17;
  (&this8)->home = nil;
  call_tmp18 = ((locale)(nil));
  (&this8)->home = call_tmp18;
  default_arg_channel_internal = QIO_CHANNEL_PTR_NULL;
  (&this8)->_channel_internal = default_arg_channel_internal;
  wrap_call_tmp = _construct_channel(call_tmp18, default_arg_channel_internal, &this8, _ln, _fn);
  type_tmp6 = wrap_call_tmp;
  call_tmp20 = ((int32_t)(INT64(0)));
  default_arghints = IOHINT_NONE;
  ret_to_arg_ref_tmp_ = &default_argstyle;
  defaultIOStyle(ret_to_arg_ref_tmp_, _ln, _fn);
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp2;
  openfd2(call_tmp20, default_arghints, &default_argstyle, ret_to_arg_ref_tmp_2, _ln, _fn);
  call_tmp21 = chpl__initCopy5(&wrap_call_tmp2, _ln, _fn);
  call_tmp19 = call_tmp21;
  _destructor_tmp_ = &wrap_call_tmp2;
  chpl___TILDE_file(_destructor_tmp_, _ln, _fn);
  _ref_tmp_6 = &call_tmp19;
  default_argend = max2(_ln, _fn);
  default_arghints2 = IOHINT_NONE;
  ret_to_arg_ref_tmp_3 = &default_argstyle2;
  _style(_ref_tmp_6, ret_to_arg_ref_tmp_3, _ln, _fn);
  ret_to_arg_ref_tmp_4 = &wrap_call_tmp3;
  reader2(_ref_tmp_6, INT64(0), default_argend, default_arghints2, &default_argstyle2, ret_to_arg_ref_tmp_4, _ln, _fn);
  call_tmp23 = chpl__initCopy6(&wrap_call_tmp3, _ln, _fn);
  call_tmp22 = call_tmp23;
  _destructor_tmp_2 = &wrap_call_tmp3;
  chpl___TILDE_channel(_destructor_tmp_2, _ln, _fn);
  _ref_tmp_7 = &type_tmp6;
  chpl___ASSIGN_7(_ref_tmp_7, &call_tmp23, _ln, _fn);
  _destructor_tmp_3 = &call_tmp22;
  chpl___TILDE_channel(_destructor_tmp_3, _ln, _fn);
  _destructor_tmp_4 = &call_tmp19;
  chpl___TILDE_file(_destructor_tmp_4, _ln, _fn);
  stdin2 = type_tmp6;
  (&this9)->home = nil;
  call_tmp24 = ((locale)(nil));
  (&this9)->home = call_tmp24;
  default_arg_channel_internal2 = QIO_CHANNEL_PTR_NULL;
  (&this9)->_channel_internal = default_arg_channel_internal2;
  wrap_call_tmp4 = _construct_channel2(call_tmp24, default_arg_channel_internal2, &this9, _ln, _fn);
  type_tmp7 = wrap_call_tmp4;
  call_tmp25 = chpl_cstdout();
  default_arghints3 = IOHINT_NONE;
  ret_to_arg_ref_tmp_5 = &default_argstyle3;
  defaultIOStyle(ret_to_arg_ref_tmp_5, _ln, _fn);
  ret_to_arg_ref_tmp_6 = &wrap_call_tmp5;
  openfp2(call_tmp25, default_arghints3, &default_argstyle3, ret_to_arg_ref_tmp_6, _ln, _fn);
  call_tmp27 = chpl__initCopy5(&wrap_call_tmp5, _ln, _fn);
  call_tmp26 = call_tmp27;
  _destructor_tmp_5 = &wrap_call_tmp5;
  chpl___TILDE_file(_destructor_tmp_5, _ln, _fn);
  _ref_tmp_8 = &call_tmp26;
  default_argend2 = max2(_ln, _fn);
  ret_to_arg_ref_tmp_7 = &default_argstyle4;
  _style(_ref_tmp_8, ret_to_arg_ref_tmp_7, _ln, _fn);
  call_tmp29 = ((int32_t)(INT64(0)));
  ret_to_arg_ref_tmp_8 = &wrap_call_tmp6;
  writer2(_ref_tmp_8, INT64(0), default_argend2, call_tmp29, &default_argstyle4, ret_to_arg_ref_tmp_8, _ln, _fn);
  call_tmp30 = chpl__initCopy7(&wrap_call_tmp6, _ln, _fn);
  call_tmp28 = call_tmp30;
  _destructor_tmp_6 = &wrap_call_tmp6;
  chpl___TILDE_channel2(_destructor_tmp_6, _ln, _fn);
  _ref_tmp_9 = &type_tmp7;
  chpl___ASSIGN_8(_ref_tmp_9, &call_tmp30, _ln, _fn);
  _destructor_tmp_7 = &call_tmp28;
  chpl___TILDE_channel2(_destructor_tmp_7, _ln, _fn);
  _destructor_tmp_8 = &call_tmp26;
  chpl___TILDE_file(_destructor_tmp_8, _ln, _fn);
  stdout2 = type_tmp7;
  (&this10)->home = nil;
  call_tmp31 = ((locale)(nil));
  (&this10)->home = call_tmp31;
  default_arg_channel_internal3 = QIO_CHANNEL_PTR_NULL;
  (&this10)->_channel_internal = default_arg_channel_internal3;
  wrap_call_tmp7 = _construct_channel2(call_tmp31, default_arg_channel_internal3, &this10, _ln, _fn);
  type_tmp8 = wrap_call_tmp7;
  call_tmp32 = chpl_cstderr();
  default_arghints4 = IOHINT_NONE;
  ret_to_arg_ref_tmp_9 = &default_argstyle5;
  defaultIOStyle(ret_to_arg_ref_tmp_9, _ln, _fn);
  ret_to_arg_ref_tmp_10 = &wrap_call_tmp8;
  openfp2(call_tmp32, default_arghints4, &default_argstyle5, ret_to_arg_ref_tmp_10, _ln, _fn);
  call_tmp34 = chpl__initCopy5(&wrap_call_tmp8, _ln, _fn);
  call_tmp33 = call_tmp34;
  _destructor_tmp_9 = &wrap_call_tmp8;
  chpl___TILDE_file(_destructor_tmp_9, _ln, _fn);
  _ref_tmp_10 = &call_tmp33;
  default_argend3 = max2(_ln, _fn);
  ret_to_arg_ref_tmp_11 = &default_argstyle6;
  _style(_ref_tmp_10, ret_to_arg_ref_tmp_11, _ln, _fn);
  call_tmp36 = ((int32_t)(INT64(0)));
  ret_to_arg_ref_tmp_12 = &wrap_call_tmp9;
  writer2(_ref_tmp_10, INT64(0), default_argend3, call_tmp36, &default_argstyle6, ret_to_arg_ref_tmp_12, _ln, _fn);
  call_tmp37 = chpl__initCopy7(&wrap_call_tmp9, _ln, _fn);
  call_tmp35 = call_tmp37;
  _destructor_tmp_10 = &wrap_call_tmp9;
  chpl___TILDE_channel2(_destructor_tmp_10, _ln, _fn);
  _ref_tmp_11 = &type_tmp8;
  chpl___ASSIGN_8(_ref_tmp_11, &call_tmp37, _ln, _fn);
  _destructor_tmp_11 = &call_tmp35;
  chpl___TILDE_channel2(_destructor_tmp_11, _ln, _fn);
  _destructor_tmp_12 = &call_tmp33;
  chpl___TILDE_file(_destructor_tmp_12, _ln, _fn);
  stderr2 = type_tmp8;
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_IO:;
  return;
}

/* IO.chpl:472 */
static void defaultIOStyle(_ref_iostyle _retArg, int64_t _ln, c_string _fn) {
  iostyle ret;
  iostyle type_tmp;
  _ref_iostyle _ref_tmp_ = NULL;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  qio_style_init_default(_ref_tmp_);
  *(_retArg) = ret;
  return;
}

/* IO.chpl:532 */
static file _construct_file(locale home, qio_file_ptr_t _file_internal, file* const meme, int64_t _ln, c_string _fn) {
  file this8;
  this8 = *(meme);
  (&this8)->home = home;
  (&this8)->_file_internal = _file_internal;
  return this8;
}

/* IO.chpl:539 */
static file chpl__initCopy5(file* const x, int64_t _ln, c_string _fn) {
  qio_file_ptr_t ret;
  ret = (x)->_file_internal;
  qio_file_retain(ret);
  return *(x);
}

/* IO.chpl:546 */
static void chpl___ASSIGN_6(_ref_file ret, file* const x, int64_t _ln, c_string _fn) {
  qio_file_ptr_t ret2;
  qio_file_ptr_t ret3;
  _ref_locale call_tmp = NULL;
  locale ret4 = NULL;
  _ref_qio_file_ptr_t call_tmp2 = NULL;
  qio_file_ptr_t ret5;
  ret2 = (x)->_file_internal;
  qio_file_retain(ret2);
  ret3 = (ret)->_file_internal;
  qio_file_release(ret3);
  call_tmp = &((ret)->home);
  ret4 = (x)->home;
  *(call_tmp) = ret4;
  call_tmp2 = &((ret)->_file_internal);
  ret5 = (x)->_file_internal;
  *(call_tmp2) = ret5;
  return;
}

/* IO.chpl:561 */
static void check(_ref_file this8, int64_t _ln, c_string _fn) {
  qio_file_ptr_t ret;
  chpl_bool call_tmp;
  ret = (this8)->_file_internal;
  call_tmp = is_c_nil(ret);
  if (call_tmp) {
    halt("Operation attempted on an invalid file", _ln, _fn);
  }
  return;
}

/* IO.chpl:567 */
static void chpl___TILDE_file(_ref_file this8, int64_t _ln, c_string _fn) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL;
  qio_file_ptr_t ret;
  _ref_qio_file_ptr_t call_tmp = NULL;
  local_QIO_FILE_PTR_NULL = QIO_FILE_PTR_NULL;
  ret = (this8)->_file_internal;
  qio_file_release(ret);
  call_tmp = &((this8)->_file_internal);
  *(call_tmp) = local_QIO_FILE_PTR_NULL;
  return;
}

/* IO.chpl:593 */
static void _style(_ref_file this8, _ref_iostyle _retArg, int64_t _ln, c_string _fn) {
  iostyle local_style;
  iostyle type_tmp;
  qio_file_ptr_t ret;
  _ref_iostyle _ref_tmp_ = NULL;
  check(this8, _ln, _fn);
  local_style = type_tmp;
  ret = (this8)->_file_internal;
  _ref_tmp_ = &local_style;
  qio_file_get_style(ret, _ref_tmp_);
  *(_retArg) = local_style;
  return;
}

/* IO.chpl:701 */
static chpl_string getPath(_ref_file this8, _ref_syserr error, int64_t _ln, c_string _fn) {
  syserr _formal_tmp_error;
  chpl_string ret;
  chpl_string ret2;
  chpl_string ret3;
  c_string tmp;
  c_string tmp2;
  qio_file_ptr_t ret4;
  syserr call_tmp;
  _ref_c_string _ref_tmp_ = NULL;
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  qio_file_ptr_t ret5;
  syserr call_tmp4;
  _ref_c_string _ref_tmp_2 = NULL;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  int32_t call_tmp7;
  chpl_bool call_tmp8;
  chpl_string call_tmp9;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  _ref_chpl_string _ref_tmp_3 = NULL;
  chpl_string call_tmp12;
  check(this8, _ln, _fn);
  ret3 = defaultStringValue;
  ret2 = ret3;
  tmp = "";
  tmp2 = "";
  ret4 = (this8)->_file_internal;
  _ref_tmp_ = &tmp;
  call_tmp = qio_file_path(ret4, _ref_tmp_);
  _formal_tmp_error = call_tmp;
  call_tmp2 = qio_err_iserr(call_tmp);
  call_tmp3 = (call_tmp2 == INT32(0));
  if (call_tmp3) {
    ret5 = (this8)->_file_internal;
    _ref_tmp_2 = &tmp2;
    call_tmp4 = qio_shortest_path(ret5, _ref_tmp_2, tmp);
    _formal_tmp_error = call_tmp4;
  }
  call_tmp5 = string_length(tmp);
  call_tmp6 = (call_tmp5 > INT64(0));
  if (call_tmp6) {
    chpl_rt_free_c_string(tmp, _ln, _fn);
  }
  call_tmp7 = qio_err_iserr(_formal_tmp_error);
  call_tmp8 = (call_tmp7 == INT32(0));
  if (call_tmp8) {
    string_from_c_string(&call_tmp9, tmp2, INT64(0), INT64(0), _ln, _fn);
    ret2 = call_tmp9;
    call_tmp10 = string_length(tmp2);
    call_tmp11 = (call_tmp10 > INT64(0));
    if (call_tmp11) {
      chpl_rt_free_c_string(tmp2, _ln, _fn);
    }
  } else {
    _ref_tmp_3 = &ret2;
    string_from_c_string(&call_tmp12, "unknown", INT64(0), INT64(0), _ln, _fn);
    *(_ref_tmp_3) = call_tmp12;
  }
  ret = ret2;
  *(error) = _formal_tmp_error;
  return ret;
}

/* IO.chpl:723 */
static chpl_string tryGetPath(_ref_file this8, int64_t _ln, c_string _fn) {
  chpl_string ret;
  syserr err;
  syserr type_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  syserr call_tmp;
  chpl_string call_tmp2;
  _ref_syserr _ref_tmp_2 = NULL;
  int32_t call_tmp3;
  chpl_bool call_tmp4;
  _ref_chpl_string _ref_tmp_3 = NULL;
  chpl_string call_tmp5;
  _ref_tmp_ = &type_tmp;
  call_tmp = qio_int_to_err(INT32(0));
  *(_ref_tmp_) = call_tmp;
  err = type_tmp;
  _ref_tmp_2 = &err;
  call_tmp2 = getPath(this8, _ref_tmp_2, _ln, _fn);
  call_tmp3 = qio_err_iserr(err);
  call_tmp4 = (call_tmp3 != INT32(0));
  if (call_tmp4) {
    _ref_tmp_3 = &ret;
    string_from_c_string(&call_tmp5, "unknown", INT64(0), INT64(0), _ln, _fn);
    *(_ref_tmp_3) = call_tmp5;
    goto _end_tryGetPath;
  } else {
    ret = call_tmp2;
    goto _end_tryGetPath;
  }
  _end_tryGetPath:;
  return ret;
}

/* IO.chpl:888 */
static void openfd(int32_t fd, _ref_syserr error, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL;
  file ret;
  file this8;
  int32_t call_tmp;
  chpl_localeID_t call_tmp2;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp3;
  locale call_tmp4 = NULL;
  qio_file_ptr_t default_arg_file_internal;
  file wrap_call_tmp;
  iostyle local_style;
  file ret2;
  file this9;
  int32_t call_tmp5;
  chpl_localeID_t call_tmp6;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_2 = NULL;
  chpl_localeID_t call_tmp7;
  locale call_tmp8 = NULL;
  qio_file_ptr_t default_arg_file_internal2;
  file wrap_call_tmp2;
  _ref_locale call_tmp9 = NULL;
  int32_t call_tmp10;
  chpl_localeID_t call_tmp11;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_3 = NULL;
  chpl_localeID_t call_tmp12;
  locale call_tmp13 = NULL;
  _ref_qio_file_ptr_t call_tmp14 = NULL;
  _cfile call_tmp15;
  syserr call_tmp16;
  int32_t call_tmp17;
  _ref_iostyle _ref_tmp_ = NULL;
  _ref_file _ref_tmp_2 = NULL;
  _ref_file _destructor_tmp_ = NULL;
  file ret_to_arg_tmp_;
  _ref_file _destructor_tmp_2 = NULL;
  local_QIO_FILE_PTR_NULL = QIO_FILE_PTR_NULL;
  (&this8)->home = nil;
  call_tmp = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  (&this8)->home = call_tmp4;
  default_arg_file_internal = local_QIO_FILE_PTR_NULL;
  (&this8)->_file_internal = default_arg_file_internal;
  wrap_call_tmp = _construct_file(call_tmp4, default_arg_file_internal, &this8, _ln, _fn);
  ret = wrap_call_tmp;
  *(_retArg) = chpl__initCopy5(&wrap_call_tmp, _ln, _fn);
  local_style = *(style);
  (&this9)->home = nil;
  call_tmp5 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl_buildLocaleID(chpl_nodeID, call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
  call_tmp7 = chpl__initCopy_chpl_rt_localeID_t(call_tmp6);
  call_tmp8 = chpl_localeID_to_locale(&call_tmp7, _ln, _fn);
  (&this9)->home = call_tmp8;
  default_arg_file_internal2 = local_QIO_FILE_PTR_NULL;
  (&this9)->_file_internal = default_arg_file_internal2;
  wrap_call_tmp2 = _construct_file(call_tmp8, default_arg_file_internal2, &this9, _ln, _fn);
  ret2 = wrap_call_tmp2;
  call_tmp9 = &((&ret2)->home);
  call_tmp10 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_3 = &call_tmp11;
  chpl_buildLocaleID(chpl_nodeID, call_tmp10, ret_to_arg_ref_tmp_3, _ln, _fn);
  call_tmp12 = chpl__initCopy_chpl_rt_localeID_t(call_tmp11);
  call_tmp13 = chpl_localeID_to_locale(&call_tmp12, _ln, _fn);
  *(call_tmp9) = call_tmp13;
  call_tmp14 = &((&ret2)->_file_internal);
  call_tmp15 = chpl_cnullfile();
  call_tmp17 = ((int32_t)(INT64(0)));
  _ref_tmp_ = &local_style;
  call_tmp16 = qio_file_init(call_tmp14, call_tmp15, fd, hints, _ref_tmp_, call_tmp17);
  _ref_tmp_2 = &ret;
  chpl___ASSIGN_6(_ref_tmp_2, &ret2, _ln, _fn);
  *(_retArg) = chpl__initCopy5(&ret, _ln, _fn);
  *(error) = call_tmp16;
  _destructor_tmp_ = &ret2;
  chpl___TILDE_file(_destructor_tmp_, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_2 = &ret_to_arg_tmp_;
  chpl___TILDE_file(_destructor_tmp_2, _ln, _fn);
  return;
}

/* IO.chpl:897 */
static void openfd2(int32_t fd, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL;
  file ret;
  file this8;
  int32_t call_tmp;
  chpl_localeID_t call_tmp2;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp3;
  locale call_tmp4 = NULL;
  qio_file_ptr_t default_arg_file_internal;
  file wrap_call_tmp;
  file call_tmp5;
  syserr err;
  syserr type_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  syserr call_tmp6;
  file ret2;
  _ref_file ret_to_arg_ref_tmp_2 = NULL;
  _ref_syserr _ref_tmp_2 = NULL;
  int32_t call_tmp7;
  chpl_bool call_tmp8;
  c_string path;
  syserr type_tmp2;
  _ref_syserr _ref_tmp_3 = NULL;
  syserr call_tmp9;
  syserr call_tmp10;
  _ref_c_string _ref_tmp_4 = NULL;
  int32_t call_tmp11;
  chpl_bool call_tmp12;
  chpl_string call_tmp13;
  c_string call_tmp14;
  chpl_string call_tmp15;
  chpl_string call_tmp16;
  _ref_file _ref_tmp_5 = NULL;
  file call_tmp17;
  _ref_file _destructor_tmp_ = NULL;
  file ret_to_arg_tmp_;
  _ref_file _destructor_tmp_2 = NULL;
  local_QIO_FILE_PTR_NULL = QIO_FILE_PTR_NULL;
  (&this8)->home = nil;
  call_tmp = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  (&this8)->home = call_tmp4;
  default_arg_file_internal = local_QIO_FILE_PTR_NULL;
  (&this8)->_file_internal = default_arg_file_internal;
  wrap_call_tmp = _construct_file(call_tmp4, default_arg_file_internal, &this8, _ln, _fn);
  ret = wrap_call_tmp;
  call_tmp5 = chpl__initCopy5(&wrap_call_tmp, _ln, _fn);
  *(_retArg) = call_tmp5;
  _ref_tmp_ = &type_tmp;
  call_tmp6 = qio_int_to_err(INT32(0));
  *(_ref_tmp_) = call_tmp6;
  err = type_tmp;
  ret_to_arg_ref_tmp_2 = &ret2;
  _ref_tmp_2 = &err;
  openfd(fd, _ref_tmp_2, hints, style, ret_to_arg_ref_tmp_2, _ln, _fn);
  call_tmp7 = qio_err_iserr(err);
  call_tmp8 = (call_tmp7 != INT32(0));
  if (call_tmp8) {
    path = "";
    _ref_tmp_3 = &type_tmp2;
    call_tmp9 = qio_int_to_err(INT32(0));
    *(_ref_tmp_3) = call_tmp9;
    _ref_tmp_4 = &path;
    call_tmp10 = qio_file_path_for_fd(fd, _ref_tmp_4);
    call_tmp11 = qio_err_iserr(call_tmp10);
    call_tmp12 = (call_tmp11 != INT32(0));
    if (call_tmp12) {
      string_from_c_string(&call_tmp13, "unknown", INT64(0), INT64(0), _ln, _fn);
      c_string_from_string(&call_tmp14, &call_tmp13, _ln, _fn);
      path = call_tmp14;
    }
    string_from_c_string(&call_tmp15, path, INT64(0), INT64(0), _ln, _fn);
    string_from_c_string(&call_tmp16, "in openfd", INT64(0), INT64(0), _ln, _fn);
    ioerror(err, call_tmp16, call_tmp15, _ln, _fn);
  }
  _ref_tmp_5 = &ret;
  chpl___ASSIGN_6(_ref_tmp_5, &ret2, _ln, _fn);
  call_tmp17 = chpl__initCopy5(&ret, _ln, _fn);
  *(_retArg) = call_tmp17;
  _destructor_tmp_ = &ret2;
  chpl___TILDE_file(_destructor_tmp_, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_2 = &ret_to_arg_tmp_;
  chpl___TILDE_file(_destructor_tmp_2, _ln, _fn);
  return;
}

/* IO.chpl:910 */
static void openfp(_cfile fp, _ref_syserr error, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL;
  file ret;
  file this8;
  int32_t call_tmp;
  chpl_localeID_t call_tmp2;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp3;
  locale call_tmp4 = NULL;
  qio_file_ptr_t default_arg_file_internal;
  file wrap_call_tmp;
  iostyle local_style;
  file ret2;
  file this9;
  int32_t call_tmp5;
  chpl_localeID_t call_tmp6;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_2 = NULL;
  chpl_localeID_t call_tmp7;
  locale call_tmp8 = NULL;
  qio_file_ptr_t default_arg_file_internal2;
  file wrap_call_tmp2;
  _ref_locale call_tmp9 = NULL;
  int32_t call_tmp10;
  chpl_localeID_t call_tmp11;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_3 = NULL;
  chpl_localeID_t call_tmp12;
  locale call_tmp13 = NULL;
  _ref_qio_file_ptr_t call_tmp14 = NULL;
  syserr call_tmp15;
  int32_t call_tmp16;
  int32_t call_tmp17;
  _ref_iostyle _ref_tmp_ = NULL;
  _ref_file _ref_tmp_2 = NULL;
  _ref_file _destructor_tmp_ = NULL;
  file ret_to_arg_tmp_;
  _ref_file _destructor_tmp_2 = NULL;
  local_QIO_FILE_PTR_NULL = QIO_FILE_PTR_NULL;
  (&this8)->home = nil;
  call_tmp = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  (&this8)->home = call_tmp4;
  default_arg_file_internal = local_QIO_FILE_PTR_NULL;
  (&this8)->_file_internal = default_arg_file_internal;
  wrap_call_tmp = _construct_file(call_tmp4, default_arg_file_internal, &this8, _ln, _fn);
  ret = wrap_call_tmp;
  *(_retArg) = chpl__initCopy5(&wrap_call_tmp, _ln, _fn);
  local_style = *(style);
  (&this9)->home = nil;
  call_tmp5 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_2 = &call_tmp6;
  chpl_buildLocaleID(chpl_nodeID, call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
  call_tmp7 = chpl__initCopy_chpl_rt_localeID_t(call_tmp6);
  call_tmp8 = chpl_localeID_to_locale(&call_tmp7, _ln, _fn);
  (&this9)->home = call_tmp8;
  default_arg_file_internal2 = local_QIO_FILE_PTR_NULL;
  (&this9)->_file_internal = default_arg_file_internal2;
  wrap_call_tmp2 = _construct_file(call_tmp8, default_arg_file_internal2, &this9, _ln, _fn);
  ret2 = wrap_call_tmp2;
  call_tmp9 = &((&ret2)->home);
  call_tmp10 = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_3 = &call_tmp11;
  chpl_buildLocaleID(chpl_nodeID, call_tmp10, ret_to_arg_ref_tmp_3, _ln, _fn);
  call_tmp12 = chpl__initCopy_chpl_rt_localeID_t(call_tmp11);
  call_tmp13 = chpl_localeID_to_locale(&call_tmp12, _ln, _fn);
  *(call_tmp9) = call_tmp13;
  call_tmp14 = &((&ret2)->_file_internal);
  call_tmp16 = ((int32_t)(INT64(-1)));
  call_tmp17 = ((int32_t)(INT64(1)));
  _ref_tmp_ = &local_style;
  call_tmp15 = qio_file_init(call_tmp14, fp, call_tmp16, hints, _ref_tmp_, call_tmp17);
  _ref_tmp_2 = &ret;
  chpl___ASSIGN_6(_ref_tmp_2, &ret2, _ln, _fn);
  *(_retArg) = chpl__initCopy5(&ret, _ln, _fn);
  *(error) = call_tmp15;
  _destructor_tmp_ = &ret2;
  chpl___TILDE_file(_destructor_tmp_, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_2 = &ret_to_arg_tmp_;
  chpl___TILDE_file(_destructor_tmp_2, _ln, _fn);
  return;
}

/* IO.chpl:919 */
static void openfp2(_cfile fp, int32_t hints, iostyle* const style, _ref_file _retArg, int64_t _ln, c_string _fn) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL;
  file ret;
  file this8;
  int32_t call_tmp;
  chpl_localeID_t call_tmp2;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp3;
  locale call_tmp4 = NULL;
  qio_file_ptr_t default_arg_file_internal;
  file wrap_call_tmp;
  file call_tmp5;
  syserr err;
  syserr type_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  syserr call_tmp6;
  file ret2;
  _ref_file ret_to_arg_ref_tmp_2 = NULL;
  _ref_syserr _ref_tmp_2 = NULL;
  int32_t call_tmp7;
  chpl_bool call_tmp8;
  c_string path;
  syserr type_tmp2;
  _ref_syserr _ref_tmp_3 = NULL;
  syserr call_tmp9;
  syserr call_tmp10;
  _ref_c_string _ref_tmp_4 = NULL;
  int32_t call_tmp11;
  chpl_bool call_tmp12;
  chpl_string call_tmp13;
  c_string call_tmp14;
  chpl_string call_tmp15;
  chpl_string call_tmp16;
  _ref_file _ref_tmp_5 = NULL;
  file call_tmp17;
  _ref_file _destructor_tmp_ = NULL;
  file ret_to_arg_tmp_;
  _ref_file _destructor_tmp_2 = NULL;
  local_QIO_FILE_PTR_NULL = QIO_FILE_PTR_NULL;
  (&this8)->home = nil;
  call_tmp = chpl_task_getRequestedSubloc();
  ret_to_arg_ref_tmp_ = &call_tmp2;
  chpl_buildLocaleID(chpl_nodeID, call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
  (&this8)->home = call_tmp4;
  default_arg_file_internal = local_QIO_FILE_PTR_NULL;
  (&this8)->_file_internal = default_arg_file_internal;
  wrap_call_tmp = _construct_file(call_tmp4, default_arg_file_internal, &this8, _ln, _fn);
  ret = wrap_call_tmp;
  call_tmp5 = chpl__initCopy5(&wrap_call_tmp, _ln, _fn);
  *(_retArg) = call_tmp5;
  _ref_tmp_ = &type_tmp;
  call_tmp6 = qio_int_to_err(INT32(0));
  *(_ref_tmp_) = call_tmp6;
  err = type_tmp;
  ret_to_arg_ref_tmp_2 = &ret2;
  _ref_tmp_2 = &err;
  openfp(fp, _ref_tmp_2, hints, style, ret_to_arg_ref_tmp_2, _ln, _fn);
  call_tmp7 = qio_err_iserr(err);
  call_tmp8 = (call_tmp7 != INT32(0));
  if (call_tmp8) {
    path = "";
    _ref_tmp_3 = &type_tmp2;
    call_tmp9 = qio_int_to_err(INT32(0));
    *(_ref_tmp_3) = call_tmp9;
    _ref_tmp_4 = &path;
    call_tmp10 = qio_file_path_for_fp(fp, _ref_tmp_4);
    call_tmp11 = qio_err_iserr(call_tmp10);
    call_tmp12 = (call_tmp11 != INT32(0));
    if (call_tmp12) {
      string_from_c_string(&call_tmp13, "unknown", INT64(0), INT64(0), _ln, _fn);
      c_string_from_string(&call_tmp14, &call_tmp13, _ln, _fn);
      path = call_tmp14;
    }
    string_from_c_string(&call_tmp15, path, INT64(0), INT64(0), _ln, _fn);
    string_from_c_string(&call_tmp16, "in openfp", INT64(0), INT64(0), _ln, _fn);
    ioerror(err, call_tmp16, call_tmp15, _ln, _fn);
  }
  _ref_tmp_5 = &ret;
  chpl___ASSIGN_6(_ref_tmp_5, &ret2, _ln, _fn);
  call_tmp17 = chpl__initCopy5(&ret, _ln, _fn);
  *(_retArg) = call_tmp17;
  _destructor_tmp_ = &ret2;
  chpl___TILDE_file(_destructor_tmp_, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_2 = &ret_to_arg_tmp_;
  chpl___TILDE_file(_destructor_tmp_2, _ln, _fn);
  return;
}

/* IO.chpl:1002 */
static channel_F_dynamic_T _construct_channel(locale home, qio_channel_ptr_t _channel_internal, channel_F_dynamic_T* const meme, int64_t _ln, c_string _fn) {
  channel_F_dynamic_T this8;
  this8 = *(meme);
  (&this8)->home = home;
  (&this8)->_channel_internal = _channel_internal;
  return this8;
}

/* IO.chpl:1002 */
static channel_T_dynamic_T _construct_channel2(locale home, qio_channel_ptr_t _channel_internal, channel_T_dynamic_T* const meme, int64_t _ln, c_string _fn) {
  channel_T_dynamic_T this8;
  this8 = *(meme);
  (&this8)->home = home;
  (&this8)->_channel_internal = _channel_internal;
  return this8;
}

/* IO.chpl:1012 */
static channel_F_dynamic_T chpl__initCopy6(channel_F_dynamic_T* const x, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t ret;
  ret = (x)->_channel_internal;
  qio_channel_retain(ret);
  return *(x);
}

/* IO.chpl:1012 */
static channel_T_dynamic_T chpl__initCopy7(channel_T_dynamic_T* const x, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t ret;
  ret = (x)->_channel_internal;
  qio_channel_retain(ret);
  return *(x);
}

/* IO.chpl:1019 */
static void chpl___ASSIGN_7(_ref_channel_F_dynamic_T ret, channel_F_dynamic_T* const x, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t ret2;
  qio_channel_ptr_t ret3;
  _ref_locale call_tmp = NULL;
  locale ret4 = NULL;
  _ref_qio_channel_ptr_t call_tmp2 = NULL;
  qio_channel_ptr_t ret5;
  ret2 = (x)->_channel_internal;
  qio_channel_retain(ret2);
  ret3 = (ret)->_channel_internal;
  qio_channel_release(ret3);
  call_tmp = &((ret)->home);
  ret4 = (x)->home;
  *(call_tmp) = ret4;
  call_tmp2 = &((ret)->_channel_internal);
  ret5 = (x)->_channel_internal;
  *(call_tmp2) = ret5;
  return;
}

/* IO.chpl:1019 */
static void chpl___ASSIGN_8(_ref_channel_T_dynamic_T ret, channel_T_dynamic_T* const x, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t ret2;
  qio_channel_ptr_t ret3;
  _ref_locale call_tmp = NULL;
  locale ret4 = NULL;
  _ref_qio_channel_ptr_t call_tmp2 = NULL;
  qio_channel_ptr_t ret5;
  ret2 = (x)->_channel_internal;
  qio_channel_retain(ret2);
  ret3 = (ret)->_channel_internal;
  qio_channel_release(ret3);
  call_tmp = &((ret)->home);
  ret4 = (x)->home;
  *(call_tmp) = ret4;
  call_tmp2 = &((ret)->_channel_internal);
  ret5 = (x)->_channel_internal;
  *(call_tmp2) = ret5;
  return;
}

/* IO.chpl:1033 */
static channel_F_dynamic_T channel(file* const f, _ref_syserr error, int32_t hints, int64_t start, int64_t end, iostyle* const local_style, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  iostyle _formal_tmp_local_style;
  channel_F_dynamic_T this8;
  channel_F_dynamic_T this9;
  locale call_tmp = NULL;
  qio_channel_ptr_t default_arg_channel_internal;
  channel_F_dynamic_T wrap_call_tmp;
  _ref_locale call_tmp2 = NULL;
  locale ret = NULL;
  _ref_qio_channel_ptr_t call_tmp3 = NULL;
  qio_file_ptr_t ret2;
  syserr call_tmp4;
  int32_t call_tmp5;
  int32_t call_tmp6;
  _ref_iostyle _ref_tmp_ = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style = *(local_style);
  (&this9)->home = nil;
  call_tmp = ((locale)(nil));
  (&this9)->home = call_tmp;
  default_arg_channel_internal = local_QIO_CHANNEL_PTR_NULL;
  (&this9)->_channel_internal = default_arg_channel_internal;
  wrap_call_tmp = _construct_channel(call_tmp, default_arg_channel_internal, &this9, _ln, _fn);
  this8 = wrap_call_tmp;
  call_tmp2 = &((&this8)->home);
  ret = (f)->home;
  *(call_tmp2) = ret;
  call_tmp3 = &((&this8)->_channel_internal);
  ret2 = (f)->_file_internal;
  call_tmp5 = ((int32_t)(true));
  call_tmp6 = ((int32_t)(false));
  _ref_tmp_ = &_formal_tmp_local_style;
  call_tmp4 = qio_channel_create(call_tmp3, ret2, hints, call_tmp5, call_tmp6, start, end, _ref_tmp_);
  *(error) = call_tmp4;
  return this8;
}

/* IO.chpl:1033 */
static channel_T_dynamic_T channel2(file* const f, _ref_syserr error, int32_t hints, int64_t start, int64_t end, iostyle* const local_style, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  iostyle _formal_tmp_local_style;
  channel_T_dynamic_T this8;
  channel_T_dynamic_T this9;
  locale call_tmp = NULL;
  qio_channel_ptr_t default_arg_channel_internal;
  channel_T_dynamic_T wrap_call_tmp;
  _ref_locale call_tmp2 = NULL;
  locale ret = NULL;
  _ref_qio_channel_ptr_t call_tmp3 = NULL;
  qio_file_ptr_t ret2;
  syserr call_tmp4;
  int32_t call_tmp5;
  int32_t call_tmp6;
  _ref_iostyle _ref_tmp_ = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style = *(local_style);
  (&this9)->home = nil;
  call_tmp = ((locale)(nil));
  (&this9)->home = call_tmp;
  default_arg_channel_internal = local_QIO_CHANNEL_PTR_NULL;
  (&this9)->_channel_internal = default_arg_channel_internal;
  wrap_call_tmp = _construct_channel2(call_tmp, default_arg_channel_internal, &this9, _ln, _fn);
  this8 = wrap_call_tmp;
  call_tmp2 = &((&this8)->home);
  ret = (f)->home;
  *(call_tmp2) = ret;
  call_tmp3 = &((&this8)->_channel_internal);
  ret2 = (f)->_file_internal;
  call_tmp5 = ((int32_t)(false));
  call_tmp6 = ((int32_t)(true));
  _ref_tmp_ = &_formal_tmp_local_style;
  call_tmp4 = qio_channel_create(call_tmp3, ret2, hints, call_tmp5, call_tmp6, start, end, _ref_tmp_);
  *(error) = call_tmp4;
  return this8;
}

/* IO.chpl:1046 */
static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this8, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  qio_channel_ptr_t ret;
  _ref_qio_channel_ptr_t call_tmp = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  ret = (this8)->_channel_internal;
  qio_channel_release(ret);
  call_tmp = &((this8)->_channel_internal);
  *(call_tmp) = local_QIO_CHANNEL_PTR_NULL;
  return;
}

/* IO.chpl:1046 */
static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this8, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  qio_channel_ptr_t ret;
  _ref_qio_channel_ptr_t call_tmp = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  ret = (this8)->_channel_internal;
  qio_channel_release(ret);
  call_tmp = &((this8)->_channel_internal);
  *(call_tmp) = local_QIO_CHANNEL_PTR_NULL;
  return;
}

/* IO.chpl:1066 */
static ioNewline _construct_ioNewline(chpl_bool skipWhitespaceOnly, ioNewline* const meme, int64_t _ln, c_string _fn) {
  ioNewline this8;
  this8 = *(meme);
  (&this8)->skipWhitespaceOnly = skipWhitespaceOnly;
  return this8;
}

/* IO.chpl:1112 */
static void _ch_ioerror(_ref_channel_T_dynamic_T this8, syserr error, chpl_string msg, int64_t _ln, c_string _fn) {
  chpl_string path;
  chpl_string type_tmp;
  chpl_string ret;
  _ref_chpl_string _ref_tmp_ = NULL;
  chpl_string call_tmp;
  int64_t offset;
  c_string tmp_path;
  int64_t tmp_offset;
  syserr type_tmp2;
  _ref_syserr _ref_tmp_2 = NULL;
  syserr call_tmp2;
  qio_channel_ptr_t ret2;
  syserr call_tmp3;
  int32_t call_tmp4;
  _ref_c_string _ref_tmp_3 = NULL;
  _ref_int64_t _ref_tmp_4 = NULL;
  int32_t call_tmp5;
  chpl_bool call_tmp6;
  chpl_string call_tmp7;
  ret = defaultStringValue;
  type_tmp = ret;
  _ref_tmp_ = &type_tmp;
  string_from_c_string(&call_tmp, "unknown", INT64(0), INT64(0), _ln, _fn);
  *(_ref_tmp_) = call_tmp;
  path = type_tmp;
  offset = INT64(-1);
  tmp_path = "";
  tmp_offset = INT64(0);
  _ref_tmp_2 = &type_tmp2;
  call_tmp2 = qio_int_to_err(INT32(0));
  *(_ref_tmp_2) = call_tmp2;
  ret2 = (this8)->_channel_internal;
  call_tmp4 = ((int32_t)(true));
  _ref_tmp_3 = &tmp_path;
  _ref_tmp_4 = &tmp_offset;
  call_tmp3 = qio_channel_path_offset(call_tmp4, ret2, _ref_tmp_3, _ref_tmp_4);
  call_tmp5 = qio_err_iserr(call_tmp3);
  call_tmp6 = (call_tmp5 == INT32(0));
  if (call_tmp6) {
    string_from_c_string(&call_tmp7, tmp_path, INT64(0), INT64(0), _ln, _fn);
    path = call_tmp7;
    offset = tmp_offset;
  }
  ioerror2(error, msg, path, offset, _ln, _fn);
  return;
}

/* IO.chpl:1281 */
static void reader(_ref_file this8, _ref_syserr error, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  syserr _formal_tmp_error;
  channel_F_dynamic_T ret;
  channel_F_dynamic_T this9;
  locale call_tmp = NULL;
  qio_channel_ptr_t default_arg_channel_internal;
  channel_F_dynamic_T wrap_call_tmp;
  channel_F_dynamic_T ret2;
  channel_F_dynamic_T this10;
  locale call_tmp2 = NULL;
  qio_channel_ptr_t default_arg_channel_internal2;
  channel_F_dynamic_T wrap_call_tmp2;
  channel_F_dynamic_T call_tmp3;
  file coerce_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  _ref_channel_F_dynamic_T _ref_tmp_2 = NULL;
  _ref_channel_F_dynamic_T _destructor_tmp_ = NULL;
  _ref_channel_F_dynamic_T _ref_tmp_3 = NULL;
  _ref_channel_F_dynamic_T _destructor_tmp_2 = NULL;
  channel_F_dynamic_T ret_to_arg_tmp_;
  _ref_channel_F_dynamic_T _destructor_tmp_3 = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  (&this9)->home = nil;
  call_tmp = ((locale)(nil));
  (&this9)->home = call_tmp;
  default_arg_channel_internal = local_QIO_CHANNEL_PTR_NULL;
  (&this9)->_channel_internal = default_arg_channel_internal;
  wrap_call_tmp = _construct_channel(call_tmp, default_arg_channel_internal, &this9, _ln, _fn);
  ret = wrap_call_tmp;
  *(_retArg) = chpl__initCopy6(&wrap_call_tmp, _ln, _fn);
  check(this8, _ln, _fn);
  (&this10)->home = nil;
  call_tmp2 = ((locale)(nil));
  (&this10)->home = call_tmp2;
  default_arg_channel_internal2 = local_QIO_CHANNEL_PTR_NULL;
  (&this10)->_channel_internal = default_arg_channel_internal2;
  wrap_call_tmp2 = _construct_channel(call_tmp2, default_arg_channel_internal2, &this10, _ln, _fn);
  ret2 = wrap_call_tmp2;
  coerce_tmp = *(this8);
  _ref_tmp_ = &_formal_tmp_error;
  call_tmp3 = channel(&coerce_tmp, _ref_tmp_, hints, start, end, style, _ln, _fn);
  _ref_tmp_2 = &ret2;
  chpl___ASSIGN_7(_ref_tmp_2, &call_tmp3, _ln, _fn);
  _destructor_tmp_ = &call_tmp3;
  chpl___TILDE_channel(_destructor_tmp_, _ln, _fn);
  _ref_tmp_3 = &ret;
  chpl___ASSIGN_7(_ref_tmp_3, &ret2, _ln, _fn);
  *(_retArg) = chpl__initCopy6(&ret, _ln, _fn);
  *(error) = _formal_tmp_error;
  _destructor_tmp_2 = &ret2;
  chpl___TILDE_channel(_destructor_tmp_2, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_3 = &ret_to_arg_tmp_;
  chpl___TILDE_channel(_destructor_tmp_3, _ln, _fn);
  return;
}

/* IO.chpl:1291 */
static void reader2(_ref_file this8, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_F_dynamic_T _retArg, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  channel_F_dynamic_T ret;
  channel_F_dynamic_T this9;
  locale call_tmp = NULL;
  qio_channel_ptr_t default_arg_channel_internal;
  channel_F_dynamic_T wrap_call_tmp;
  channel_F_dynamic_T call_tmp2;
  syserr err;
  syserr type_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  syserr call_tmp3;
  channel_F_dynamic_T ret2;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp_ = NULL;
  _ref_syserr _ref_tmp_2 = NULL;
  int32_t call_tmp4;
  chpl_bool call_tmp5;
  chpl_string call_tmp6;
  chpl_string call_tmp7;
  _ref_channel_F_dynamic_T _ref_tmp_3 = NULL;
  channel_F_dynamic_T call_tmp8;
  _ref_channel_F_dynamic_T _destructor_tmp_ = NULL;
  channel_F_dynamic_T ret_to_arg_tmp_;
  _ref_channel_F_dynamic_T _destructor_tmp_2 = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  (&this9)->home = nil;
  call_tmp = ((locale)(nil));
  (&this9)->home = call_tmp;
  default_arg_channel_internal = local_QIO_CHANNEL_PTR_NULL;
  (&this9)->_channel_internal = default_arg_channel_internal;
  wrap_call_tmp = _construct_channel(call_tmp, default_arg_channel_internal, &this9, _ln, _fn);
  ret = wrap_call_tmp;
  call_tmp2 = chpl__initCopy6(&wrap_call_tmp, _ln, _fn);
  *(_retArg) = call_tmp2;
  _ref_tmp_ = &type_tmp;
  call_tmp3 = qio_int_to_err(INT32(0));
  *(_ref_tmp_) = call_tmp3;
  err = type_tmp;
  ret_to_arg_ref_tmp_ = &ret2;
  _ref_tmp_2 = &err;
  reader(this8, _ref_tmp_2, start, end, hints, style, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp4 = qio_err_iserr(err);
  call_tmp5 = (call_tmp4 != INT32(0));
  if (call_tmp5) {
    call_tmp6 = tryGetPath(this8, _ln, _fn);
    string_from_c_string(&call_tmp7, "in file.reader", INT64(0), INT64(0), _ln, _fn);
    ioerror(err, call_tmp7, call_tmp6, _ln, _fn);
  }
  _ref_tmp_3 = &ret;
  chpl___ASSIGN_7(_ref_tmp_3, &ret2, _ln, _fn);
  call_tmp8 = chpl__initCopy6(&ret, _ln, _fn);
  *(_retArg) = call_tmp8;
  _destructor_tmp_ = &ret2;
  chpl___TILDE_channel(_destructor_tmp_, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_2 = &ret_to_arg_tmp_;
  chpl___TILDE_channel(_destructor_tmp_2, _ln, _fn);
  return;
}

/* IO.chpl:1324 */
static void writer(_ref_file this8, _ref_syserr error, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  syserr _formal_tmp_error;
  channel_T_dynamic_T ret;
  channel_T_dynamic_T this9;
  locale call_tmp = NULL;
  qio_channel_ptr_t default_arg_channel_internal;
  channel_T_dynamic_T wrap_call_tmp;
  channel_T_dynamic_T ret2;
  channel_T_dynamic_T this10;
  locale call_tmp2 = NULL;
  qio_channel_ptr_t default_arg_channel_internal2;
  channel_T_dynamic_T wrap_call_tmp2;
  channel_T_dynamic_T call_tmp3;
  file coerce_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  _ref_channel_T_dynamic_T _ref_tmp_2 = NULL;
  _ref_channel_T_dynamic_T _destructor_tmp_ = NULL;
  _ref_channel_T_dynamic_T _ref_tmp_3 = NULL;
  _ref_channel_T_dynamic_T _destructor_tmp_2 = NULL;
  channel_T_dynamic_T ret_to_arg_tmp_;
  _ref_channel_T_dynamic_T _destructor_tmp_3 = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  (&this9)->home = nil;
  call_tmp = ((locale)(nil));
  (&this9)->home = call_tmp;
  default_arg_channel_internal = local_QIO_CHANNEL_PTR_NULL;
  (&this9)->_channel_internal = default_arg_channel_internal;
  wrap_call_tmp = _construct_channel2(call_tmp, default_arg_channel_internal, &this9, _ln, _fn);
  ret = wrap_call_tmp;
  *(_retArg) = chpl__initCopy7(&wrap_call_tmp, _ln, _fn);
  check(this8, _ln, _fn);
  (&this10)->home = nil;
  call_tmp2 = ((locale)(nil));
  (&this10)->home = call_tmp2;
  default_arg_channel_internal2 = local_QIO_CHANNEL_PTR_NULL;
  (&this10)->_channel_internal = default_arg_channel_internal2;
  wrap_call_tmp2 = _construct_channel2(call_tmp2, default_arg_channel_internal2, &this10, _ln, _fn);
  ret2 = wrap_call_tmp2;
  coerce_tmp = *(this8);
  _ref_tmp_ = &_formal_tmp_error;
  call_tmp3 = channel2(&coerce_tmp, _ref_tmp_, hints, start, end, style, _ln, _fn);
  _ref_tmp_2 = &ret2;
  chpl___ASSIGN_8(_ref_tmp_2, &call_tmp3, _ln, _fn);
  _destructor_tmp_ = &call_tmp3;
  chpl___TILDE_channel2(_destructor_tmp_, _ln, _fn);
  _ref_tmp_3 = &ret;
  chpl___ASSIGN_8(_ref_tmp_3, &ret2, _ln, _fn);
  *(_retArg) = chpl__initCopy7(&ret, _ln, _fn);
  *(error) = _formal_tmp_error;
  _destructor_tmp_2 = &ret2;
  chpl___TILDE_channel2(_destructor_tmp_2, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_3 = &ret_to_arg_tmp_;
  chpl___TILDE_channel2(_destructor_tmp_3, _ln, _fn);
  return;
}

/* IO.chpl:1334 */
static void writer2(_ref_file this8, int64_t start, int64_t end, int32_t hints, iostyle* const style, _ref_channel_T_dynamic_T _retArg, int64_t _ln, c_string _fn) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL;
  channel_T_dynamic_T ret;
  channel_T_dynamic_T this9;
  locale call_tmp = NULL;
  qio_channel_ptr_t default_arg_channel_internal;
  channel_T_dynamic_T wrap_call_tmp;
  channel_T_dynamic_T call_tmp2;
  syserr err;
  syserr type_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  syserr call_tmp3;
  channel_T_dynamic_T ret2;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp_ = NULL;
  _ref_syserr _ref_tmp_2 = NULL;
  int32_t call_tmp4;
  chpl_bool call_tmp5;
  chpl_string call_tmp6;
  chpl_string call_tmp7;
  _ref_channel_T_dynamic_T _ref_tmp_3 = NULL;
  channel_T_dynamic_T call_tmp8;
  _ref_channel_T_dynamic_T _destructor_tmp_ = NULL;
  channel_T_dynamic_T ret_to_arg_tmp_;
  _ref_channel_T_dynamic_T _destructor_tmp_2 = NULL;
  local_QIO_CHANNEL_PTR_NULL = QIO_CHANNEL_PTR_NULL;
  (&this9)->home = nil;
  call_tmp = ((locale)(nil));
  (&this9)->home = call_tmp;
  default_arg_channel_internal = local_QIO_CHANNEL_PTR_NULL;
  (&this9)->_channel_internal = default_arg_channel_internal;
  wrap_call_tmp = _construct_channel2(call_tmp, default_arg_channel_internal, &this9, _ln, _fn);
  ret = wrap_call_tmp;
  call_tmp2 = chpl__initCopy7(&wrap_call_tmp, _ln, _fn);
  *(_retArg) = call_tmp2;
  _ref_tmp_ = &type_tmp;
  call_tmp3 = qio_int_to_err(INT32(0));
  *(_ref_tmp_) = call_tmp3;
  err = type_tmp;
  ret_to_arg_ref_tmp_ = &ret2;
  _ref_tmp_2 = &err;
  writer(this8, _ref_tmp_2, start, end, hints, style, ret_to_arg_ref_tmp_, _ln, _fn);
  call_tmp4 = qio_err_iserr(err);
  call_tmp5 = (call_tmp4 != INT32(0));
  if (call_tmp5) {
    call_tmp6 = tryGetPath(this8, _ln, _fn);
    string_from_c_string(&call_tmp7, "in file.writer", INT64(0), INT64(0), _ln, _fn);
    ioerror(err, call_tmp7, call_tmp6, _ln, _fn);
  }
  _ref_tmp_3 = &ret;
  chpl___ASSIGN_8(_ref_tmp_3, &ret2, _ln, _fn);
  call_tmp8 = chpl__initCopy7(&ret, _ln, _fn);
  *(_retArg) = call_tmp8;
  _destructor_tmp_ = &ret2;
  chpl___TILDE_channel2(_destructor_tmp_, _ln, _fn);
  ret_to_arg_tmp_ = *(_retArg);
  _destructor_tmp_2 = &ret_to_arg_tmp_;
  chpl___TILDE_channel2(_destructor_tmp_2, _ln, _fn);
  return;
}

/* IO.chpl:1446 */
static syserr _write_text_internal(qio_channel_ptr_t _channel_internal, _real64 x, int64_t _ln, c_string _fn) {
  syserr ret;
  syserr call_tmp;
  int32_t call_tmp2;
  uint64_t call_tmp3;
  _ref__real64 _ref_tmp_ = NULL;
  call_tmp2 = ((int32_t)(false));
  call_tmp3 = ((uint64_t)(INT64(8)));
  _ref_tmp_ = &x;
  call_tmp = qio_channel_print_float(call_tmp2, _channel_internal, _ref_tmp_, call_tmp3);
  ret = call_tmp;
  goto _end__write_text_internal;
  _end__write_text_internal:;
  return ret;
}

/* IO.chpl:1446 */
static syserr _write_text_internal2(qio_channel_ptr_t _channel_internal, chpl_string x, int64_t _ln, c_string _fn) {
  syserr ret;
  c_string call_tmp;
  c_string call_tmp2;
  int64_t call_tmp3;
  syserr call_tmp4;
  int32_t call_tmp5;
  c_string_from_string(&call_tmp, &x, _ln, _fn);
  c_string_from_string(&call_tmp2, &x, _ln, _fn);
  call_tmp3 = string_length(call_tmp2);
  call_tmp5 = ((int32_t)(false));
  call_tmp4 = qio_channel_print_string(call_tmp5, _channel_internal, call_tmp, call_tmp3);
  ret = call_tmp4;
  goto _end__write_text_internal;
  _end__write_text_internal:;
  return ret;
}

/* IO.chpl:1446 */
static syserr _write_text_internal3(qio_channel_ptr_t _channel_internal, c_string x, int64_t _ln, c_string _fn) {
  syserr ret;
  int64_t call_tmp;
  syserr call_tmp2;
  int32_t call_tmp3;
  call_tmp = string_length(x);
  call_tmp3 = ((int32_t)(false));
  call_tmp2 = qio_channel_print_string(call_tmp3, _channel_internal, x, call_tmp);
  ret = call_tmp2;
  goto _end__write_text_internal;
  _end__write_text_internal:;
  return ret;
}

/* IO.chpl:1446 */
static syserr _write_text_internal4(qio_channel_ptr_t _channel_internal, uint32_t x, int64_t _ln, c_string _fn) {
  syserr ret;
  syserr call_tmp;
  int32_t call_tmp2;
  uint64_t call_tmp3;
  int32_t call_tmp4;
  _ref_uint32_t _ref_tmp_ = NULL;
  call_tmp2 = ((int32_t)(false));
  call_tmp3 = ((uint64_t)(INT64(4)));
  call_tmp4 = ((int32_t)(false));
  _ref_tmp_ = &x;
  call_tmp = qio_channel_print_int(call_tmp2, _channel_internal, _ref_tmp_, call_tmp3, call_tmp4);
  ret = call_tmp;
  goto _end__write_text_internal;
  _end__write_text_internal:;
  return ret;
}

/* IO.chpl:1446 */
static syserr _write_text_internal5(qio_channel_ptr_t _channel_internal, taskState x, int64_t _ln, c_string _fn) {
  syserr ret;
  c_string call_tmp;
  int64_t call_tmp2;
  syserr call_tmp3;
  int32_t call_tmp4;
  call_tmp = _cast(x, _ln, _fn);
  call_tmp2 = string_length(call_tmp);
  call_tmp4 = ((int32_t)(false));
  call_tmp3 = qio_channel_print_literal(call_tmp4, _channel_internal, call_tmp, call_tmp2);
  ret = call_tmp3;
  goto _end__write_text_internal;
  _end__write_text_internal:;
  return ret;
}

/* IO.chpl:1685 */
static chpl_string _args_to_proto(_real64 _e0_args, ioNewline* const _e1_args, chpl_string preArg, int64_t _ln, c_string _fn) {
  chpl_string ret;
  c_string err_args;
  c_string name;
  chpl_string coerce_tmp;
  _ref_c_string _ref_tmp_ = NULL;
  c_string call_tmp;
  c_string call_tmp2;
  c_string call_tmp3;
  chpl_string call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  c_string call_tmp7;
  c_string call_tmp8;
  chpl_string call_tmp9;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  c_string call_tmp12;
  c_string call_tmp13;
  chpl_string call_tmp14;
  int64_t call_tmp15;
  chpl_bool call_tmp16;
  _ref_c_string _ref_tmp_2 = NULL;
  c_string call_tmp17;
  c_string call_tmp18;
  chpl_string call_tmp19;
  int64_t call_tmp20;
  chpl_bool call_tmp21;
  c_string call_tmp22;
  chpl_string call_tmp23;
  _ref_c_string _ref_tmp_3 = NULL;
  c_string call_tmp24;
  c_string call_tmp25;
  chpl_string call_tmp26;
  int64_t call_tmp27;
  chpl_bool call_tmp28;
  c_string call_tmp29;
  c_string name2;
  chpl_string coerce_tmp2;
  _ref_c_string _ref_tmp_4 = NULL;
  c_string call_tmp30;
  c_string call_tmp31;
  c_string call_tmp32;
  chpl_string call_tmp33;
  int64_t call_tmp34;
  chpl_bool call_tmp35;
  c_string call_tmp36;
  c_string call_tmp37;
  chpl_string call_tmp38;
  int64_t call_tmp39;
  chpl_bool call_tmp40;
  c_string call_tmp41;
  c_string call_tmp42;
  chpl_string call_tmp43;
  int64_t call_tmp44;
  chpl_bool call_tmp45;
  _ref_c_string _ref_tmp_5 = NULL;
  c_string call_tmp46;
  c_string call_tmp47;
  chpl_string call_tmp48;
  int64_t call_tmp49;
  chpl_bool call_tmp50;
  c_string call_tmp51;
  chpl_string call_tmp52;
  int64_t call_tmp53;
  chpl_bool call_tmp54;
  err_args = "";
  name = "";
  coerce_tmp = *(_arg_to_proto_names + INT64(0));
  _ref_tmp_ = &name;
  c_string_from_string(&call_tmp, &coerce_tmp, _ln, _fn);
  *(_ref_tmp_) = call_tmp;
  c_string_from_string(&call_tmp2, &preArg, _ln, _fn);
  call_tmp3 = string_concat(call_tmp2, name, _ln, _fn);
  string_from_c_string(&call_tmp4, call_tmp3, INT64(0), INT64(0), _ln, _fn);
  call_tmp5 = string_length(call_tmp3);
  call_tmp6 = (call_tmp5 > INT64(0));
  if (call_tmp6) {
    chpl_rt_free_c_string(call_tmp3, _ln, _fn);
  }
  c_string_from_string(&call_tmp7, &call_tmp4, _ln, _fn);
  call_tmp8 = string_concat(call_tmp7, ":", _ln, _fn);
  string_from_c_string(&call_tmp9, call_tmp8, INT64(0), INT64(0), _ln, _fn);
  call_tmp10 = string_length(call_tmp8);
  call_tmp11 = (call_tmp10 > INT64(0));
  if (call_tmp11) {
    chpl_rt_free_c_string(call_tmp8, _ln, _fn);
  }
  c_string_from_string(&call_tmp12, &call_tmp9, _ln, _fn);
  call_tmp13 = string_concat(call_tmp12, "real(64)", _ln, _fn);
  string_from_c_string(&call_tmp14, call_tmp13, INT64(0), INT64(0), _ln, _fn);
  call_tmp15 = string_length(call_tmp13);
  call_tmp16 = (call_tmp15 > INT64(0));
  if (call_tmp16) {
    chpl_rt_free_c_string(call_tmp13, _ln, _fn);
  }
  _ref_tmp_2 = &err_args;
  c_string_from_string(&call_tmp17, &call_tmp14, _ln, _fn);
  call_tmp18 = string_concat(err_args, call_tmp17, _ln, _fn);
  string_from_c_string(&call_tmp19, call_tmp18, INT64(0), INT64(0), _ln, _fn);
  call_tmp20 = string_length(call_tmp18);
  call_tmp21 = (call_tmp20 > INT64(0));
  if (call_tmp21) {
    chpl_rt_free_c_string(call_tmp18, _ln, _fn);
  }
  c_string_from_string(&call_tmp22, &call_tmp19, _ln, _fn);
  *(_ref_tmp_2) = call_tmp22;
  string_from_c_string(&call_tmp23, ", ", INT64(0), INT64(0), _ln, _fn);
  _ref_tmp_3 = &err_args;
  c_string_from_string(&call_tmp24, &call_tmp23, _ln, _fn);
  call_tmp25 = string_concat(err_args, call_tmp24, _ln, _fn);
  string_from_c_string(&call_tmp26, call_tmp25, INT64(0), INT64(0), _ln, _fn);
  call_tmp27 = string_length(call_tmp25);
  call_tmp28 = (call_tmp27 > INT64(0));
  if (call_tmp28) {
    chpl_rt_free_c_string(call_tmp25, _ln, _fn);
  }
  c_string_from_string(&call_tmp29, &call_tmp26, _ln, _fn);
  *(_ref_tmp_3) = call_tmp29;
  name2 = "";
  coerce_tmp2 = *(_arg_to_proto_names + INT64(1));
  _ref_tmp_4 = &name2;
  c_string_from_string(&call_tmp30, &coerce_tmp2, _ln, _fn);
  *(_ref_tmp_4) = call_tmp30;
  c_string_from_string(&call_tmp31, &preArg, _ln, _fn);
  call_tmp32 = string_concat(call_tmp31, name2, _ln, _fn);
  string_from_c_string(&call_tmp33, call_tmp32, INT64(0), INT64(0), _ln, _fn);
  call_tmp34 = string_length(call_tmp32);
  call_tmp35 = (call_tmp34 > INT64(0));
  if (call_tmp35) {
    chpl_rt_free_c_string(call_tmp32, _ln, _fn);
  }
  c_string_from_string(&call_tmp36, &call_tmp33, _ln, _fn);
  call_tmp37 = string_concat(call_tmp36, ":", _ln, _fn);
  string_from_c_string(&call_tmp38, call_tmp37, INT64(0), INT64(0), _ln, _fn);
  call_tmp39 = string_length(call_tmp37);
  call_tmp40 = (call_tmp39 > INT64(0));
  if (call_tmp40) {
    chpl_rt_free_c_string(call_tmp37, _ln, _fn);
  }
  c_string_from_string(&call_tmp41, &call_tmp38, _ln, _fn);
  call_tmp42 = string_concat(call_tmp41, "ioNewline", _ln, _fn);
  string_from_c_string(&call_tmp43, call_tmp42, INT64(0), INT64(0), _ln, _fn);
  call_tmp44 = string_length(call_tmp42);
  call_tmp45 = (call_tmp44 > INT64(0));
  if (call_tmp45) {
    chpl_rt_free_c_string(call_tmp42, _ln, _fn);
  }
  _ref_tmp_5 = &err_args;
  c_string_from_string(&call_tmp46, &call_tmp43, _ln, _fn);
  call_tmp47 = string_concat(err_args, call_tmp46, _ln, _fn);
  string_from_c_string(&call_tmp48, call_tmp47, INT64(0), INT64(0), _ln, _fn);
  call_tmp49 = string_length(call_tmp47);
  call_tmp50 = (call_tmp49 > INT64(0));
  if (call_tmp50) {
    chpl_rt_free_c_string(call_tmp47, _ln, _fn);
  }
  c_string_from_string(&call_tmp51, &call_tmp48, _ln, _fn);
  *(_ref_tmp_5) = call_tmp51;
  string_from_c_string(&call_tmp52, err_args, INT64(0), INT64(0), _ln, _fn);
  call_tmp53 = string_length(err_args);
  call_tmp54 = (call_tmp53 > INT64(0));
  if (call_tmp54) {
    chpl_rt_free_c_string(err_args, _ln, _fn);
  }
  ret = call_tmp52;
  return ret;
}

/* IO.chpl:1685 */
static chpl_string _args_to_proto2(chpl_string _e0_args, c_string _e1_args, chpl_string _e2_args, uint32_t _e3_args, chpl_string _e4_args, taskState _e5_args, ioNewline* const _e6_args, chpl_string preArg, int64_t _ln, c_string _fn) {
  chpl_string ret;
  c_string err_args;
  c_string name;
  chpl_string coerce_tmp;
  _ref_c_string _ref_tmp_ = NULL;
  c_string call_tmp;
  c_string call_tmp2;
  c_string call_tmp3;
  chpl_string call_tmp4;
  int64_t call_tmp5;
  chpl_bool call_tmp6;
  c_string call_tmp7;
  c_string call_tmp8;
  chpl_string call_tmp9;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  c_string call_tmp12;
  c_string call_tmp13;
  chpl_string call_tmp14;
  int64_t call_tmp15;
  chpl_bool call_tmp16;
  _ref_c_string _ref_tmp_2 = NULL;
  c_string call_tmp17;
  c_string call_tmp18;
  chpl_string call_tmp19;
  int64_t call_tmp20;
  chpl_bool call_tmp21;
  c_string call_tmp22;
  chpl_string call_tmp23;
  _ref_c_string _ref_tmp_3 = NULL;
  c_string call_tmp24;
  c_string call_tmp25;
  chpl_string call_tmp26;
  int64_t call_tmp27;
  chpl_bool call_tmp28;
  c_string call_tmp29;
  c_string name2;
  chpl_string coerce_tmp2;
  _ref_c_string _ref_tmp_4 = NULL;
  c_string call_tmp30;
  c_string call_tmp31;
  c_string call_tmp32;
  chpl_string call_tmp33;
  int64_t call_tmp34;
  chpl_bool call_tmp35;
  c_string call_tmp36;
  c_string call_tmp37;
  chpl_string call_tmp38;
  int64_t call_tmp39;
  chpl_bool call_tmp40;
  c_string call_tmp41;
  c_string call_tmp42;
  chpl_string call_tmp43;
  int64_t call_tmp44;
  chpl_bool call_tmp45;
  _ref_c_string _ref_tmp_5 = NULL;
  c_string call_tmp46;
  c_string call_tmp47;
  chpl_string call_tmp48;
  int64_t call_tmp49;
  chpl_bool call_tmp50;
  c_string call_tmp51;
  chpl_string call_tmp52;
  _ref_c_string _ref_tmp_6 = NULL;
  c_string call_tmp53;
  c_string call_tmp54;
  chpl_string call_tmp55;
  int64_t call_tmp56;
  chpl_bool call_tmp57;
  c_string call_tmp58;
  c_string name3;
  chpl_string coerce_tmp3;
  _ref_c_string _ref_tmp_7 = NULL;
  c_string call_tmp59;
  c_string call_tmp60;
  c_string call_tmp61;
  chpl_string call_tmp62;
  int64_t call_tmp63;
  chpl_bool call_tmp64;
  c_string call_tmp65;
  c_string call_tmp66;
  chpl_string call_tmp67;
  int64_t call_tmp68;
  chpl_bool call_tmp69;
  c_string call_tmp70;
  c_string call_tmp71;
  chpl_string call_tmp72;
  int64_t call_tmp73;
  chpl_bool call_tmp74;
  _ref_c_string _ref_tmp_8 = NULL;
  c_string call_tmp75;
  c_string call_tmp76;
  chpl_string call_tmp77;
  int64_t call_tmp78;
  chpl_bool call_tmp79;
  c_string call_tmp80;
  chpl_string call_tmp81;
  _ref_c_string _ref_tmp_9 = NULL;
  c_string call_tmp82;
  c_string call_tmp83;
  chpl_string call_tmp84;
  int64_t call_tmp85;
  chpl_bool call_tmp86;
  c_string call_tmp87;
  c_string name4;
  chpl_string coerce_tmp4;
  _ref_c_string _ref_tmp_10 = NULL;
  c_string call_tmp88;
  c_string call_tmp89;
  c_string call_tmp90;
  chpl_string call_tmp91;
  int64_t call_tmp92;
  chpl_bool call_tmp93;
  c_string call_tmp94;
  c_string call_tmp95;
  chpl_string call_tmp96;
  int64_t call_tmp97;
  chpl_bool call_tmp98;
  c_string call_tmp99;
  c_string call_tmp100;
  chpl_string call_tmp101;
  int64_t call_tmp102;
  chpl_bool call_tmp103;
  _ref_c_string _ref_tmp_11 = NULL;
  c_string call_tmp104;
  c_string call_tmp105;
  chpl_string call_tmp106;
  int64_t call_tmp107;
  chpl_bool call_tmp108;
  c_string call_tmp109;
  chpl_string call_tmp110;
  _ref_c_string _ref_tmp_12 = NULL;
  c_string call_tmp111;
  c_string call_tmp112;
  chpl_string call_tmp113;
  int64_t call_tmp114;
  chpl_bool call_tmp115;
  c_string call_tmp116;
  c_string name5;
  chpl_string coerce_tmp5;
  _ref_c_string _ref_tmp_13 = NULL;
  c_string call_tmp117;
  c_string call_tmp118;
  c_string call_tmp119;
  chpl_string call_tmp120;
  int64_t call_tmp121;
  chpl_bool call_tmp122;
  c_string call_tmp123;
  c_string call_tmp124;
  chpl_string call_tmp125;
  int64_t call_tmp126;
  chpl_bool call_tmp127;
  c_string call_tmp128;
  c_string call_tmp129;
  chpl_string call_tmp130;
  int64_t call_tmp131;
  chpl_bool call_tmp132;
  _ref_c_string _ref_tmp_14 = NULL;
  c_string call_tmp133;
  c_string call_tmp134;
  chpl_string call_tmp135;
  int64_t call_tmp136;
  chpl_bool call_tmp137;
  c_string call_tmp138;
  chpl_string call_tmp139;
  _ref_c_string _ref_tmp_15 = NULL;
  c_string call_tmp140;
  c_string call_tmp141;
  chpl_string call_tmp142;
  int64_t call_tmp143;
  chpl_bool call_tmp144;
  c_string call_tmp145;
  c_string name6;
  chpl_string coerce_tmp6;
  _ref_c_string _ref_tmp_16 = NULL;
  c_string call_tmp146;
  c_string call_tmp147;
  c_string call_tmp148;
  chpl_string call_tmp149;
  int64_t call_tmp150;
  chpl_bool call_tmp151;
  c_string call_tmp152;
  c_string call_tmp153;
  chpl_string call_tmp154;
  int64_t call_tmp155;
  chpl_bool call_tmp156;
  c_string call_tmp157;
  c_string call_tmp158;
  chpl_string call_tmp159;
  int64_t call_tmp160;
  chpl_bool call_tmp161;
  _ref_c_string _ref_tmp_17 = NULL;
  c_string call_tmp162;
  c_string call_tmp163;
  chpl_string call_tmp164;
  int64_t call_tmp165;
  chpl_bool call_tmp166;
  c_string call_tmp167;
  chpl_string call_tmp168;
  _ref_c_string _ref_tmp_18 = NULL;
  c_string call_tmp169;
  c_string call_tmp170;
  chpl_string call_tmp171;
  int64_t call_tmp172;
  chpl_bool call_tmp173;
  c_string call_tmp174;
  c_string call_tmp175;
  c_string call_tmp176;
  chpl_string call_tmp177;
  int64_t call_tmp178;
  chpl_bool call_tmp179;
  c_string call_tmp180;
  c_string call_tmp181;
  chpl_string call_tmp182;
  int64_t call_tmp183;
  chpl_bool call_tmp184;
  c_string call_tmp185;
  c_string call_tmp186;
  chpl_string call_tmp187;
  int64_t call_tmp188;
  chpl_bool call_tmp189;
  _ref_c_string _ref_tmp_19 = NULL;
  c_string call_tmp190;
  c_string call_tmp191;
  chpl_string call_tmp192;
  int64_t call_tmp193;
  chpl_bool call_tmp194;
  c_string call_tmp195;
  chpl_string call_tmp196;
  int64_t call_tmp197;
  chpl_bool call_tmp198;
  err_args = "";
  name = "";
  coerce_tmp = *(_arg_to_proto_names + INT64(0));
  _ref_tmp_ = &name;
  c_string_from_string(&call_tmp, &coerce_tmp, _ln, _fn);
  *(_ref_tmp_) = call_tmp;
  c_string_from_string(&call_tmp2, &preArg, _ln, _fn);
  call_tmp3 = string_concat(call_tmp2, name, _ln, _fn);
  string_from_c_string(&call_tmp4, call_tmp3, INT64(0), INT64(0), _ln, _fn);
  call_tmp5 = string_length(call_tmp3);
  call_tmp6 = (call_tmp5 > INT64(0));
  if (call_tmp6) {
    chpl_rt_free_c_string(call_tmp3, _ln, _fn);
  }
  c_string_from_string(&call_tmp7, &call_tmp4, _ln, _fn);
  call_tmp8 = string_concat(call_tmp7, ":", _ln, _fn);
  string_from_c_string(&call_tmp9, call_tmp8, INT64(0), INT64(0), _ln, _fn);
  call_tmp10 = string_length(call_tmp8);
  call_tmp11 = (call_tmp10 > INT64(0));
  if (call_tmp11) {
    chpl_rt_free_c_string(call_tmp8, _ln, _fn);
  }
  c_string_from_string(&call_tmp12, &call_tmp9, _ln, _fn);
  call_tmp13 = string_concat(call_tmp12, "string", _ln, _fn);
  string_from_c_string(&call_tmp14, call_tmp13, INT64(0), INT64(0), _ln, _fn);
  call_tmp15 = string_length(call_tmp13);
  call_tmp16 = (call_tmp15 > INT64(0));
  if (call_tmp16) {
    chpl_rt_free_c_string(call_tmp13, _ln, _fn);
  }
  _ref_tmp_2 = &err_args;
  c_string_from_string(&call_tmp17, &call_tmp14, _ln, _fn);
  call_tmp18 = string_concat(err_args, call_tmp17, _ln, _fn);
  string_from_c_string(&call_tmp19, call_tmp18, INT64(0), INT64(0), _ln, _fn);
  call_tmp20 = string_length(call_tmp18);
  call_tmp21 = (call_tmp20 > INT64(0));
  if (call_tmp21) {
    chpl_rt_free_c_string(call_tmp18, _ln, _fn);
  }
  c_string_from_string(&call_tmp22, &call_tmp19, _ln, _fn);
  *(_ref_tmp_2) = call_tmp22;
  string_from_c_string(&call_tmp23, ", ", INT64(0), INT64(0), _ln, _fn);
  _ref_tmp_3 = &err_args;
  c_string_from_string(&call_tmp24, &call_tmp23, _ln, _fn);
  call_tmp25 = string_concat(err_args, call_tmp24, _ln, _fn);
  string_from_c_string(&call_tmp26, call_tmp25, INT64(0), INT64(0), _ln, _fn);
  call_tmp27 = string_length(call_tmp25);
  call_tmp28 = (call_tmp27 > INT64(0));
  if (call_tmp28) {
    chpl_rt_free_c_string(call_tmp25, _ln, _fn);
  }
  c_string_from_string(&call_tmp29, &call_tmp26, _ln, _fn);
  *(_ref_tmp_3) = call_tmp29;
  name2 = "";
  coerce_tmp2 = *(_arg_to_proto_names + INT64(1));
  _ref_tmp_4 = &name2;
  c_string_from_string(&call_tmp30, &coerce_tmp2, _ln, _fn);
  *(_ref_tmp_4) = call_tmp30;
  c_string_from_string(&call_tmp31, &preArg, _ln, _fn);
  call_tmp32 = string_concat(call_tmp31, name2, _ln, _fn);
  string_from_c_string(&call_tmp33, call_tmp32, INT64(0), INT64(0), _ln, _fn);
  call_tmp34 = string_length(call_tmp32);
  call_tmp35 = (call_tmp34 > INT64(0));
  if (call_tmp35) {
    chpl_rt_free_c_string(call_tmp32, _ln, _fn);
  }
  c_string_from_string(&call_tmp36, &call_tmp33, _ln, _fn);
  call_tmp37 = string_concat(call_tmp36, ":", _ln, _fn);
  string_from_c_string(&call_tmp38, call_tmp37, INT64(0), INT64(0), _ln, _fn);
  call_tmp39 = string_length(call_tmp37);
  call_tmp40 = (call_tmp39 > INT64(0));
  if (call_tmp40) {
    chpl_rt_free_c_string(call_tmp37, _ln, _fn);
  }
  c_string_from_string(&call_tmp41, &call_tmp38, _ln, _fn);
  call_tmp42 = string_concat(call_tmp41, "c_string", _ln, _fn);
  string_from_c_string(&call_tmp43, call_tmp42, INT64(0), INT64(0), _ln, _fn);
  call_tmp44 = string_length(call_tmp42);
  call_tmp45 = (call_tmp44 > INT64(0));
  if (call_tmp45) {
    chpl_rt_free_c_string(call_tmp42, _ln, _fn);
  }
  _ref_tmp_5 = &err_args;
  c_string_from_string(&call_tmp46, &call_tmp43, _ln, _fn);
  call_tmp47 = string_concat(err_args, call_tmp46, _ln, _fn);
  string_from_c_string(&call_tmp48, call_tmp47, INT64(0), INT64(0), _ln, _fn);
  call_tmp49 = string_length(call_tmp47);
  call_tmp50 = (call_tmp49 > INT64(0));
  if (call_tmp50) {
    chpl_rt_free_c_string(call_tmp47, _ln, _fn);
  }
  c_string_from_string(&call_tmp51, &call_tmp48, _ln, _fn);
  *(_ref_tmp_5) = call_tmp51;
  string_from_c_string(&call_tmp52, ", ", INT64(0), INT64(0), _ln, _fn);
  _ref_tmp_6 = &err_args;
  c_string_from_string(&call_tmp53, &call_tmp52, _ln, _fn);
  call_tmp54 = string_concat(err_args, call_tmp53, _ln, _fn);
  string_from_c_string(&call_tmp55, call_tmp54, INT64(0), INT64(0), _ln, _fn);
  call_tmp56 = string_length(call_tmp54);
  call_tmp57 = (call_tmp56 > INT64(0));
  if (call_tmp57) {
    chpl_rt_free_c_string(call_tmp54, _ln, _fn);
  }
  c_string_from_string(&call_tmp58, &call_tmp55, _ln, _fn);
  *(_ref_tmp_6) = call_tmp58;
  name3 = "";
  coerce_tmp3 = *(_arg_to_proto_names + INT64(2));
  _ref_tmp_7 = &name3;
  c_string_from_string(&call_tmp59, &coerce_tmp3, _ln, _fn);
  *(_ref_tmp_7) = call_tmp59;
  c_string_from_string(&call_tmp60, &preArg, _ln, _fn);
  call_tmp61 = string_concat(call_tmp60, name3, _ln, _fn);
  string_from_c_string(&call_tmp62, call_tmp61, INT64(0), INT64(0), _ln, _fn);
  call_tmp63 = string_length(call_tmp61);
  call_tmp64 = (call_tmp63 > INT64(0));
  if (call_tmp64) {
    chpl_rt_free_c_string(call_tmp61, _ln, _fn);
  }
  c_string_from_string(&call_tmp65, &call_tmp62, _ln, _fn);
  call_tmp66 = string_concat(call_tmp65, ":", _ln, _fn);
  string_from_c_string(&call_tmp67, call_tmp66, INT64(0), INT64(0), _ln, _fn);
  call_tmp68 = string_length(call_tmp66);
  call_tmp69 = (call_tmp68 > INT64(0));
  if (call_tmp69) {
    chpl_rt_free_c_string(call_tmp66, _ln, _fn);
  }
  c_string_from_string(&call_tmp70, &call_tmp67, _ln, _fn);
  call_tmp71 = string_concat(call_tmp70, "string", _ln, _fn);
  string_from_c_string(&call_tmp72, call_tmp71, INT64(0), INT64(0), _ln, _fn);
  call_tmp73 = string_length(call_tmp71);
  call_tmp74 = (call_tmp73 > INT64(0));
  if (call_tmp74) {
    chpl_rt_free_c_string(call_tmp71, _ln, _fn);
  }
  _ref_tmp_8 = &err_args;
  c_string_from_string(&call_tmp75, &call_tmp72, _ln, _fn);
  call_tmp76 = string_concat(err_args, call_tmp75, _ln, _fn);
  string_from_c_string(&call_tmp77, call_tmp76, INT64(0), INT64(0), _ln, _fn);
  call_tmp78 = string_length(call_tmp76);
  call_tmp79 = (call_tmp78 > INT64(0));
  if (call_tmp79) {
    chpl_rt_free_c_string(call_tmp76, _ln, _fn);
  }
  c_string_from_string(&call_tmp80, &call_tmp77, _ln, _fn);
  *(_ref_tmp_8) = call_tmp80;
  string_from_c_string(&call_tmp81, ", ", INT64(0), INT64(0), _ln, _fn);
  _ref_tmp_9 = &err_args;
  c_string_from_string(&call_tmp82, &call_tmp81, _ln, _fn);
  call_tmp83 = string_concat(err_args, call_tmp82, _ln, _fn);
  string_from_c_string(&call_tmp84, call_tmp83, INT64(0), INT64(0), _ln, _fn);
  call_tmp85 = string_length(call_tmp83);
  call_tmp86 = (call_tmp85 > INT64(0));
  if (call_tmp86) {
    chpl_rt_free_c_string(call_tmp83, _ln, _fn);
  }
  c_string_from_string(&call_tmp87, &call_tmp84, _ln, _fn);
  *(_ref_tmp_9) = call_tmp87;
  name4 = "";
  coerce_tmp4 = *(_arg_to_proto_names + INT64(3));
  _ref_tmp_10 = &name4;
  c_string_from_string(&call_tmp88, &coerce_tmp4, _ln, _fn);
  *(_ref_tmp_10) = call_tmp88;
  c_string_from_string(&call_tmp89, &preArg, _ln, _fn);
  call_tmp90 = string_concat(call_tmp89, name4, _ln, _fn);
  string_from_c_string(&call_tmp91, call_tmp90, INT64(0), INT64(0), _ln, _fn);
  call_tmp92 = string_length(call_tmp90);
  call_tmp93 = (call_tmp92 > INT64(0));
  if (call_tmp93) {
    chpl_rt_free_c_string(call_tmp90, _ln, _fn);
  }
  c_string_from_string(&call_tmp94, &call_tmp91, _ln, _fn);
  call_tmp95 = string_concat(call_tmp94, ":", _ln, _fn);
  string_from_c_string(&call_tmp96, call_tmp95, INT64(0), INT64(0), _ln, _fn);
  call_tmp97 = string_length(call_tmp95);
  call_tmp98 = (call_tmp97 > INT64(0));
  if (call_tmp98) {
    chpl_rt_free_c_string(call_tmp95, _ln, _fn);
  }
  c_string_from_string(&call_tmp99, &call_tmp96, _ln, _fn);
  call_tmp100 = string_concat(call_tmp99, "uint(32)", _ln, _fn);
  string_from_c_string(&call_tmp101, call_tmp100, INT64(0), INT64(0), _ln, _fn);
  call_tmp102 = string_length(call_tmp100);
  call_tmp103 = (call_tmp102 > INT64(0));
  if (call_tmp103) {
    chpl_rt_free_c_string(call_tmp100, _ln, _fn);
  }
  _ref_tmp_11 = &err_args;
  c_string_from_string(&call_tmp104, &call_tmp101, _ln, _fn);
  call_tmp105 = string_concat(err_args, call_tmp104, _ln, _fn);
  string_from_c_string(&call_tmp106, call_tmp105, INT64(0), INT64(0), _ln, _fn);
  call_tmp107 = string_length(call_tmp105);
  call_tmp108 = (call_tmp107 > INT64(0));
  if (call_tmp108) {
    chpl_rt_free_c_string(call_tmp105, _ln, _fn);
  }
  c_string_from_string(&call_tmp109, &call_tmp106, _ln, _fn);
  *(_ref_tmp_11) = call_tmp109;
  string_from_c_string(&call_tmp110, ", ", INT64(0), INT64(0), _ln, _fn);
  _ref_tmp_12 = &err_args;
  c_string_from_string(&call_tmp111, &call_tmp110, _ln, _fn);
  call_tmp112 = string_concat(err_args, call_tmp111, _ln, _fn);
  string_from_c_string(&call_tmp113, call_tmp112, INT64(0), INT64(0), _ln, _fn);
  call_tmp114 = string_length(call_tmp112);
  call_tmp115 = (call_tmp114 > INT64(0));
  if (call_tmp115) {
    chpl_rt_free_c_string(call_tmp112, _ln, _fn);
  }
  c_string_from_string(&call_tmp116, &call_tmp113, _ln, _fn);
  *(_ref_tmp_12) = call_tmp116;
  name5 = "";
  coerce_tmp5 = *(_arg_to_proto_names + INT64(4));
  _ref_tmp_13 = &name5;
  c_string_from_string(&call_tmp117, &coerce_tmp5, _ln, _fn);
  *(_ref_tmp_13) = call_tmp117;
  c_string_from_string(&call_tmp118, &preArg, _ln, _fn);
  call_tmp119 = string_concat(call_tmp118, name5, _ln, _fn);
  string_from_c_string(&call_tmp120, call_tmp119, INT64(0), INT64(0), _ln, _fn);
  call_tmp121 = string_length(call_tmp119);
  call_tmp122 = (call_tmp121 > INT64(0));
  if (call_tmp122) {
    chpl_rt_free_c_string(call_tmp119, _ln, _fn);
  }
  c_string_from_string(&call_tmp123, &call_tmp120, _ln, _fn);
  call_tmp124 = string_concat(call_tmp123, ":", _ln, _fn);
  string_from_c_string(&call_tmp125, call_tmp124, INT64(0), INT64(0), _ln, _fn);
  call_tmp126 = string_length(call_tmp124);
  call_tmp127 = (call_tmp126 > INT64(0));
  if (call_tmp127) {
    chpl_rt_free_c_string(call_tmp124, _ln, _fn);
  }
  c_string_from_string(&call_tmp128, &call_tmp125, _ln, _fn);
  call_tmp129 = string_concat(call_tmp128, "string", _ln, _fn);
  string_from_c_string(&call_tmp130, call_tmp129, INT64(0), INT64(0), _ln, _fn);
  call_tmp131 = string_length(call_tmp129);
  call_tmp132 = (call_tmp131 > INT64(0));
  if (call_tmp132) {
    chpl_rt_free_c_string(call_tmp129, _ln, _fn);
  }
  _ref_tmp_14 = &err_args;
  c_string_from_string(&call_tmp133, &call_tmp130, _ln, _fn);
  call_tmp134 = string_concat(err_args, call_tmp133, _ln, _fn);
  string_from_c_string(&call_tmp135, call_tmp134, INT64(0), INT64(0), _ln, _fn);
  call_tmp136 = string_length(call_tmp134);
  call_tmp137 = (call_tmp136 > INT64(0));
  if (call_tmp137) {
    chpl_rt_free_c_string(call_tmp134, _ln, _fn);
  }
  c_string_from_string(&call_tmp138, &call_tmp135, _ln, _fn);
  *(_ref_tmp_14) = call_tmp138;
  string_from_c_string(&call_tmp139, ", ", INT64(0), INT64(0), _ln, _fn);
  _ref_tmp_15 = &err_args;
  c_string_from_string(&call_tmp140, &call_tmp139, _ln, _fn);
  call_tmp141 = string_concat(err_args, call_tmp140, _ln, _fn);
  string_from_c_string(&call_tmp142, call_tmp141, INT64(0), INT64(0), _ln, _fn);
  call_tmp143 = string_length(call_tmp141);
  call_tmp144 = (call_tmp143 > INT64(0));
  if (call_tmp144) {
    chpl_rt_free_c_string(call_tmp141, _ln, _fn);
  }
  c_string_from_string(&call_tmp145, &call_tmp142, _ln, _fn);
  *(_ref_tmp_15) = call_tmp145;
  name6 = "";
  coerce_tmp6 = *(_arg_to_proto_names + INT64(5));
  _ref_tmp_16 = &name6;
  c_string_from_string(&call_tmp146, &coerce_tmp6, _ln, _fn);
  *(_ref_tmp_16) = call_tmp146;
  c_string_from_string(&call_tmp147, &preArg, _ln, _fn);
  call_tmp148 = string_concat(call_tmp147, name6, _ln, _fn);
  string_from_c_string(&call_tmp149, call_tmp148, INT64(0), INT64(0), _ln, _fn);
  call_tmp150 = string_length(call_tmp148);
  call_tmp151 = (call_tmp150 > INT64(0));
  if (call_tmp151) {
    chpl_rt_free_c_string(call_tmp148, _ln, _fn);
  }
  c_string_from_string(&call_tmp152, &call_tmp149, _ln, _fn);
  call_tmp153 = string_concat(call_tmp152, ":", _ln, _fn);
  string_from_c_string(&call_tmp154, call_tmp153, INT64(0), INT64(0), _ln, _fn);
  call_tmp155 = string_length(call_tmp153);
  call_tmp156 = (call_tmp155 > INT64(0));
  if (call_tmp156) {
    chpl_rt_free_c_string(call_tmp153, _ln, _fn);
  }
  c_string_from_string(&call_tmp157, &call_tmp154, _ln, _fn);
  call_tmp158 = string_concat(call_tmp157, "taskState", _ln, _fn);
  string_from_c_string(&call_tmp159, call_tmp158, INT64(0), INT64(0), _ln, _fn);
  call_tmp160 = string_length(call_tmp158);
  call_tmp161 = (call_tmp160 > INT64(0));
  if (call_tmp161) {
    chpl_rt_free_c_string(call_tmp158, _ln, _fn);
  }
  _ref_tmp_17 = &err_args;
  c_string_from_string(&call_tmp162, &call_tmp159, _ln, _fn);
  call_tmp163 = string_concat(err_args, call_tmp162, _ln, _fn);
  string_from_c_string(&call_tmp164, call_tmp163, INT64(0), INT64(0), _ln, _fn);
  call_tmp165 = string_length(call_tmp163);
  call_tmp166 = (call_tmp165 > INT64(0));
  if (call_tmp166) {
    chpl_rt_free_c_string(call_tmp163, _ln, _fn);
  }
  c_string_from_string(&call_tmp167, &call_tmp164, _ln, _fn);
  *(_ref_tmp_17) = call_tmp167;
  string_from_c_string(&call_tmp168, ", ", INT64(0), INT64(0), _ln, _fn);
  _ref_tmp_18 = &err_args;
  c_string_from_string(&call_tmp169, &call_tmp168, _ln, _fn);
  call_tmp170 = string_concat(err_args, call_tmp169, _ln, _fn);
  string_from_c_string(&call_tmp171, call_tmp170, INT64(0), INT64(0), _ln, _fn);
  call_tmp172 = string_length(call_tmp170);
  call_tmp173 = (call_tmp172 > INT64(0));
  if (call_tmp173) {
    chpl_rt_free_c_string(call_tmp170, _ln, _fn);
  }
  c_string_from_string(&call_tmp174, &call_tmp171, _ln, _fn);
  *(_ref_tmp_18) = call_tmp174;
  c_string_from_string(&call_tmp175, &preArg, _ln, _fn);
  call_tmp176 = string_concat(call_tmp175, "x7", _ln, _fn);
  string_from_c_string(&call_tmp177, call_tmp176, INT64(0), INT64(0), _ln, _fn);
  call_tmp178 = string_length(call_tmp176);
  call_tmp179 = (call_tmp178 > INT64(0));
  if (call_tmp179) {
    chpl_rt_free_c_string(call_tmp176, _ln, _fn);
  }
  c_string_from_string(&call_tmp180, &call_tmp177, _ln, _fn);
  call_tmp181 = string_concat(call_tmp180, ":", _ln, _fn);
  string_from_c_string(&call_tmp182, call_tmp181, INT64(0), INT64(0), _ln, _fn);
  call_tmp183 = string_length(call_tmp181);
  call_tmp184 = (call_tmp183 > INT64(0));
  if (call_tmp184) {
    chpl_rt_free_c_string(call_tmp181, _ln, _fn);
  }
  c_string_from_string(&call_tmp185, &call_tmp182, _ln, _fn);
  call_tmp186 = string_concat(call_tmp185, "ioNewline", _ln, _fn);
  string_from_c_string(&call_tmp187, call_tmp186, INT64(0), INT64(0), _ln, _fn);
  call_tmp188 = string_length(call_tmp186);
  call_tmp189 = (call_tmp188 > INT64(0));
  if (call_tmp189) {
    chpl_rt_free_c_string(call_tmp186, _ln, _fn);
  }
  _ref_tmp_19 = &err_args;
  c_string_from_string(&call_tmp190, &call_tmp187, _ln, _fn);
  call_tmp191 = string_concat(err_args, call_tmp190, _ln, _fn);
  string_from_c_string(&call_tmp192, call_tmp191, INT64(0), INT64(0), _ln, _fn);
  call_tmp193 = string_length(call_tmp191);
  call_tmp194 = (call_tmp193 > INT64(0));
  if (call_tmp194) {
    chpl_rt_free_c_string(call_tmp191, _ln, _fn);
  }
  c_string_from_string(&call_tmp195, &call_tmp192, _ln, _fn);
  *(_ref_tmp_19) = call_tmp195;
  string_from_c_string(&call_tmp196, err_args, INT64(0), INT64(0), _ln, _fn);
  call_tmp197 = string_length(err_args);
  call_tmp198 = (call_tmp197 > INT64(0));
  if (call_tmp198) {
    chpl_rt_free_c_string(err_args, _ln, _fn);
  }
  ret = call_tmp196;
  return ret;
}

/* IO.chpl:2059 */
static chpl_bool writeln(_ref_channel_T_dynamic_T this8, _real64 _e0_args, int64_t _ln, c_string _fn) {
  ioNewline this9;
  ioNewline wrap_call_tmp;
  _real64 args_x1;
  ioNewline args_x2;
  chpl_bool ret;
  syserr e;
  syserr type_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  syserr call_tmp;
  _ref_syserr _ref_tmp_2 = NULL;
  syserr _formal_tmp_error;
  _ref_syserr _ref_tmp_3 = NULL;
  syserr call_tmp2;
  syserr err;
  syserr type_tmp2;
  _ref_syserr _ref_tmp_4 = NULL;
  syserr call_tmp3;
  _ref_syserr _ref_tmp_5 = NULL;
  syserr _formal_tmp_error2;
  _ref_syserr _ref_tmp_6 = NULL;
  syserr call_tmp4;
  qio_channel_ptr_t ret2;
  syserr call_tmp5;
  int32_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_string call_tmp8;
  int32_t call_tmp9;
  chpl_bool call_tmp10;
  qio_channel_ptr_t ret3;
  _real64 coerce_tmp;
  syserr e2;
  syserr type_tmp3;
  _ref_syserr _ref_tmp_7 = NULL;
  syserr call_tmp11;
  uint8_t call_tmp12;
  uint8_t call_tmp13;
  chpl_bool call_tmp14;
  int16_t call_tmp15;
  int16_t call_tmp16;
  chpl_bool call_tmp17;
  syserr ret4;
  syserr call_tmp18;
  int32_t call_tmp19;
  int32_t call_tmp20;
  uint64_t call_tmp21;
  _ref__real64 _ref_tmp_8 = NULL;
  int16_t call_tmp22;
  int16_t call_tmp23;
  chpl_bool call_tmp24;
  syserr ret5;
  syserr call_tmp25;
  int32_t call_tmp26;
  int32_t call_tmp27;
  uint64_t call_tmp28;
  _ref__real64 _ref_tmp_9 = NULL;
  syserr ret6;
  syserr call_tmp29;
  int32_t call_tmp30;
  int32_t call_tmp31;
  uint64_t call_tmp32;
  _ref__real64 _ref_tmp_10 = NULL;
  syserr call_tmp33;
  int32_t call_tmp34;
  chpl_bool call_tmp35;
  qio_channel_ptr_t ret7;
  syserr ret8;
  syserr type_tmp4;
  _ref_syserr _ref_tmp_11 = NULL;
  syserr call_tmp36;
  syserr call_tmp37;
  int32_t call_tmp38;
  qio_channel_ptr_t ret9;
  int32_t call_tmp39;
  chpl_bool call_tmp40;
  chpl_string call_tmp41;
  chpl_string call_tmp42;
  c_string call_tmp43;
  c_string call_tmp44;
  chpl_string call_tmp45;
  int64_t call_tmp46;
  chpl_bool call_tmp47;
  c_string call_tmp48;
  c_string call_tmp49;
  chpl_string call_tmp50;
  int64_t call_tmp51;
  chpl_bool call_tmp52;
  (&this9)->skipWhitespaceOnly = false;
  (&this9)->skipWhitespaceOnly = false;
  wrap_call_tmp = _construct_ioNewline(false, &this9, _ln, _fn);
  args_x1 = _e0_args;
  args_x2 = wrap_call_tmp;
  _ref_tmp_ = &type_tmp;
  call_tmp = qio_int_to_err(INT32(0));
  *(_ref_tmp_) = call_tmp;
  e = type_tmp;
  _ref_tmp_2 = &e;
  _ref_tmp_3 = &_formal_tmp_error;
  call_tmp2 = qio_int_to_err(INT32(0));
  *(_ref_tmp_3) = call_tmp2;
  _ref_tmp_4 = &type_tmp2;
  call_tmp3 = qio_int_to_err(INT32(0));
  *(_ref_tmp_4) = call_tmp3;
  err = type_tmp2;
  _ref_tmp_5 = &err;
  _ref_tmp_6 = &_formal_tmp_error2;
  call_tmp4 = qio_int_to_err(INT32(0));
  *(_ref_tmp_6) = call_tmp4;
  ret2 = (this8)->_channel_internal;
  call_tmp5 = qio_channel_lock(ret2);
  _formal_tmp_error2 = call_tmp5;
  *(_ref_tmp_5) = call_tmp5;
  call_tmp6 = qio_err_iserr(err);
  call_tmp7 = (call_tmp6 != INT32(0));
  if (call_tmp7) {
    string_from_c_string(&call_tmp8, "in lock", INT64(0), INT64(0), _ln, _fn);
    _ch_ioerror(this8, err, call_tmp8, _ln, _fn);
  }
  call_tmp9 = qio_err_iserr(_formal_tmp_error);
  call_tmp10 = (call_tmp9 == INT32(0));
  if (call_tmp10) {
    ret3 = (this8)->_channel_internal;
    coerce_tmp = _e0_args;
    _ref_tmp_7 = &type_tmp3;
    call_tmp11 = qio_int_to_err(INT32(0));
    *(_ref_tmp_7) = call_tmp11;
    call_tmp12 = qio_channel_binary(ret3);
    call_tmp13 = qio_channel_byteorder(ret3);
    call_tmp14 = (call_tmp12 != UINT8(0));
    if (call_tmp14) {
      call_tmp15 = ((int16_t)(call_tmp13));
      call_tmp16 = ((int16_t)(iokind_big));
      call_tmp17 = (call_tmp15 == call_tmp16);
      if (call_tmp17) {
        call_tmp19 = ((int32_t)(false));
        call_tmp20 = ((int32_t)(iokind_big));
        call_tmp21 = ((uint64_t)(INT64(8)));
        _ref_tmp_8 = &coerce_tmp;
        call_tmp18 = qio_channel_write_float(call_tmp19, call_tmp20, ret3, _ref_tmp_8, call_tmp21);
        ret4 = call_tmp18;
        goto _end__write_binary_internal;
        _end__write_binary_internal:;
        e2 = ret4;
      } else {
        call_tmp22 = ((int16_t)(call_tmp13));
        call_tmp23 = ((int16_t)(iokind_little));
        call_tmp24 = (call_tmp22 == call_tmp23);
        if (call_tmp24) {
          call_tmp26 = ((int32_t)(false));
          call_tmp27 = ((int32_t)(iokind_little));
          call_tmp28 = ((uint64_t)(INT64(8)));
          _ref_tmp_9 = &coerce_tmp;
          call_tmp25 = qio_channel_write_float(call_tmp26, call_tmp27, ret3, _ref_tmp_9, call_tmp28);
          ret5 = call_tmp25;
          goto _end__write_binary_internal2;
          _end__write_binary_internal2:;
          e2 = ret5;
        } else {
          call_tmp30 = ((int32_t)(false));
          call_tmp31 = ((int32_t)(iokind_native));
          call_tmp32 = ((uint64_t)(INT64(8)));
          _ref_tmp_10 = &coerce_tmp;
          call_tmp29 = qio_channel_write_float(call_tmp30, call_tmp31, ret3, _ref_tmp_10, call_tmp32);
          ret6 = call_tmp29;
          goto _end__write_binary_internal3;
          _end__write_binary_internal3:;
          e2 = ret6;
        }
      }
    } else {
      call_tmp33 = _write_text_internal(ret3, _e0_args, _ln, _fn);
      e2 = call_tmp33;
    }
    _formal_tmp_error = e2;
  }
  call_tmp34 = qio_err_iserr(_formal_tmp_error);
  call_tmp35 = (call_tmp34 == INT32(0));
  if (call_tmp35) {
    ret7 = (this8)->_channel_internal;
    _ref_tmp_11 = &type_tmp4;
    call_tmp36 = qio_int_to_err(INT32(0));
    *(_ref_tmp_11) = call_tmp36;
    call_tmp38 = ((int32_t)(false));
    call_tmp37 = qio_channel_write_newline(call_tmp38, ret7);
    ret8 = call_tmp37;
    goto _end__write_one_internal;
    _end__write_one_internal:;
    _formal_tmp_error = ret8;
  }
  ret9 = (this8)->_channel_internal;
  qio_channel_unlock(ret9);
  qio_err_iserr(_formal_tmp_error);
  *(_ref_tmp_2) = _formal_tmp_error;
  call_tmp39 = qio_err_iserr(e);
  call_tmp40 = (call_tmp39 == INT32(0));
  if (call_tmp40) {
    ret = true;
    goto _end_write;
  } else {
    string_from_c_string(&call_tmp42, "", INT64(0), INT64(0), _ln, _fn);
    call_tmp41 = _args_to_proto(args_x1, &args_x2, call_tmp42, _ln, _fn);
    c_string_from_string(&call_tmp43, &call_tmp41, _ln, _fn);
    call_tmp44 = string_concat("in channel.write(", call_tmp43, _ln, _fn);
    string_from_c_string(&call_tmp45, call_tmp44, INT64(0), INT64(0), _ln, _fn);
    call_tmp46 = string_length(call_tmp44);
    call_tmp47 = (call_tmp46 > INT64(0));
    if (call_tmp47) {
      chpl_rt_free_c_string(call_tmp44, _ln, _fn);
    }
    c_string_from_string(&call_tmp48, &call_tmp45, _ln, _fn);
    call_tmp49 = string_concat(call_tmp48, ")", _ln, _fn);
    string_from_c_string(&call_tmp50, call_tmp49, INT64(0), INT64(0), _ln, _fn);
    call_tmp51 = string_length(call_tmp49);
    call_tmp52 = (call_tmp51 > INT64(0));
    if (call_tmp52) {
      chpl_rt_free_c_string(call_tmp49, _ln, _fn);
    }
    _ch_ioerror(this8, e, call_tmp50, _ln, _fn);
    ret = false;
    goto _end_write;
  }
  _end_write:;
  return ret;
}

/* IO.chpl:2059 */
static chpl_bool writeln2(_ref_channel_T_dynamic_T this8, chpl_string _e0_args, c_string _e1_args, chpl_string _e2_args, uint32_t _e3_args, chpl_string _e4_args, taskState _e5_args, int64_t _ln, c_string _fn) {
  ioNewline this9;
  ioNewline wrap_call_tmp;
  chpl_string args_x1;
  c_string args_x2;
  chpl_string args_x3;
  uint32_t args_x4;
  chpl_string args_x5;
  taskState args_x6;
  ioNewline args_x7;
  chpl_bool ret;
  syserr e;
  syserr type_tmp;
  _ref_syserr _ref_tmp_ = NULL;
  syserr call_tmp;
  _ref_syserr _ref_tmp_2 = NULL;
  syserr _formal_tmp_error;
  c_string args_x22;
  chpl_string args_x32;
  uint32_t args_x42;
  chpl_string args_x52;
  taskState args_x62;
  _ref_syserr _ref_tmp_3 = NULL;
  syserr call_tmp2;
  syserr err;
  syserr type_tmp2;
  _ref_syserr _ref_tmp_4 = NULL;
  syserr call_tmp3;
  _ref_syserr _ref_tmp_5 = NULL;
  syserr _formal_tmp_error2;
  _ref_syserr _ref_tmp_6 = NULL;
  syserr call_tmp4;
  qio_channel_ptr_t ret2;
  syserr call_tmp5;
  int32_t call_tmp6;
  chpl_bool call_tmp7;
  chpl_string call_tmp8;
  int32_t call_tmp9;
  chpl_bool call_tmp10;
  qio_channel_ptr_t ret3;
  syserr e2;
  syserr type_tmp3;
  _ref_syserr _ref_tmp_7 = NULL;
  syserr call_tmp11;
  uint8_t call_tmp12;
  uint8_t call_tmp13;
  chpl_bool call_tmp14;
  int16_t call_tmp15;
  int16_t call_tmp16;
  chpl_bool call_tmp17;
  syserr ret4;
  int64_t call_tmp18;
  c_string call_tmp19;
  c_string call_tmp20;
  int64_t call_tmp21;
  syserr call_tmp22;
  int32_t call_tmp23;
  int32_t call_tmp24;
  int16_t call_tmp25;
  int16_t call_tmp26;
  chpl_bool call_tmp27;
  syserr ret5;
  int64_t call_tmp28;
  c_string call_tmp29;
  c_string call_tmp30;
  int64_t call_tmp31;
  syserr call_tmp32;
  int32_t call_tmp33;
  int32_t call_tmp34;
  syserr ret6;
  int64_t call_tmp35;
  c_string call_tmp36;
  c_string call_tmp37;
  int64_t call_tmp38;
  syserr call_tmp39;
  int32_t call_tmp40;
  int32_t call_tmp41;
  syserr call_tmp42;
  int32_t call_tmp43;
  chpl_bool call_tmp44;
  qio_channel_ptr_t ret7;
  syserr e3;
  syserr type_tmp4;
  _ref_syserr _ref_tmp_8 = NULL;
  syserr call_tmp45;
  uint8_t call_tmp46;
  uint8_t call_tmp47;
  chpl_bool call_tmp48;
  int16_t call_tmp49;
  int16_t call_tmp50;
  chpl_bool call_tmp51;
  syserr ret8;
  int64_t call_tmp52;
  int64_t call_tmp53;
  syserr call_tmp54;
  int32_t call_tmp55;
  int32_t call_tmp56;
  int16_t call_tmp57;
  int16_t call_tmp58;
  chpl_bool call_tmp59;
  syserr ret9;
  int64_t call_tmp60;
  int64_t call_tmp61;
  syserr call_tmp62;
  int32_t call_tmp63;
  int32_t call_tmp64;
  syserr ret10;
  int64_t call_tmp65;
  int64_t call_tmp66;
  syserr call_tmp67;
  int32_t call_tmp68;
  int32_t call_tmp69;
  syserr call_tmp70;
  int32_t call_tmp71;
  chpl_bool call_tmp72;
  qio_channel_ptr_t ret11;
  syserr e4;
  syserr type_tmp5;
  _ref_syserr _ref_tmp_9 = NULL;
  syserr call_tmp73;
  uint8_t call_tmp74;
  uint8_t call_tmp75;
  chpl_bool call_tmp76;
  int16_t call_tmp77;
  int16_t call_tmp78;
  chpl_bool call_tmp79;
  syserr ret12;
  int64_t call_tmp80;
  c_string call_tmp81;
  c_string call_tmp82;
  int64_t call_tmp83;
  syserr call_tmp84;
  int32_t call_tmp85;
  int32_t call_tmp86;
  int16_t call_tmp87;
  int16_t call_tmp88;
  chpl_bool call_tmp89;
  syserr ret13;
  int64_t call_tmp90;
  c_string call_tmp91;
  c_string call_tmp92;
  int64_t call_tmp93;
  syserr call_tmp94;
  int32_t call_tmp95;
  int32_t call_tmp96;
  syserr ret14;
  int64_t call_tmp97;
  c_string call_tmp98;
  c_string call_tmp99;
  int64_t call_tmp100;
  syserr call_tmp101;
  int32_t call_tmp102;
  int32_t call_tmp103;
  syserr call_tmp104;
  int32_t call_tmp105;
  chpl_bool call_tmp106;
  qio_channel_ptr_t ret15;
  uint32_t coerce_tmp;
  syserr e5;
  syserr type_tmp6;
  _ref_syserr _ref_tmp_10 = NULL;
  syserr call_tmp107;
  uint8_t call_tmp108;
  uint8_t call_tmp109;
  chpl_bool call_tmp110;
  int16_t call_tmp111;
  int16_t call_tmp112;
  chpl_bool call_tmp113;
  syserr ret16;
  syserr call_tmp114;
  int32_t call_tmp115;
  int32_t call_tmp116;
  uint64_t call_tmp117;
  int32_t call_tmp118;
  _ref_uint32_t _ref_tmp_11 = NULL;
  int16_t call_tmp119;
  int16_t call_tmp120;
  chpl_bool call_tmp121;
  syserr ret17;
  syserr call_tmp122;
  int32_t call_tmp123;
  int32_t call_tmp124;
  uint64_t call_tmp125;
  int32_t call_tmp126;
  _ref_uint32_t _ref_tmp_12 = NULL;
  syserr ret18;
  syserr call_tmp127;
  int32_t call_tmp128;
  int32_t call_tmp129;
  uint64_t call_tmp130;
  int32_t call_tmp131;
  _ref_uint32_t _ref_tmp_13 = NULL;
  syserr call_tmp132;
  int32_t call_tmp133;
  chpl_bool call_tmp134;
  qio_channel_ptr_t ret19;
  syserr e6;
  syserr type_tmp7;
  _ref_syserr _ref_tmp_14 = NULL;
  syserr call_tmp135;
  uint8_t call_tmp136;
  uint8_t call_tmp137;
  chpl_bool call_tmp138;
  int16_t call_tmp139;
  int16_t call_tmp140;
  chpl_bool call_tmp141;
  syserr ret20;
  int64_t call_tmp142;
  c_string call_tmp143;
  c_string call_tmp144;
  int64_t call_tmp145;
  syserr call_tmp146;
  int32_t call_tmp147;
  int32_t call_tmp148;
  int16_t call_tmp149;
  int16_t call_tmp150;
  chpl_bool call_tmp151;
  syserr ret21;
  int64_t call_tmp152;
  c_string call_tmp153;
  c_string call_tmp154;
  int64_t call_tmp155;
  syserr call_tmp156;
  int32_t call_tmp157;
  int32_t call_tmp158;
  syserr ret22;
  int64_t call_tmp159;
  c_string call_tmp160;
  c_string call_tmp161;
  int64_t call_tmp162;
  syserr call_tmp163;
  int32_t call_tmp164;
  int32_t call_tmp165;
  syserr call_tmp166;
  int32_t call_tmp167;
  chpl_bool call_tmp168;
  qio_channel_ptr_t ret23;
  syserr e7;
  syserr type_tmp8;
  _ref_syserr _ref_tmp_15 = NULL;
  syserr call_tmp169;
  uint8_t call_tmp170;
  uint8_t call_tmp171;
  chpl_bool call_tmp172;
  int16_t call_tmp173;
  int16_t call_tmp174;
  chpl_bool call_tmp175;
  syserr ret24;
  uint8_t i;
  uint8_t call_tmp176;
  syserr call_tmp177;
  int32_t call_tmp178;
  int32_t call_tmp179;
  uint64_t call_tmp180;
  int32_t call_tmp181;
  _ref_uint8_t _ref_tmp_16 = NULL;
  int16_t call_tmp182;
  int16_t call_tmp183;
  chpl_bool call_tmp184;
  syserr ret25;
  uint8_t i2;
  uint8_t call_tmp185;
  syserr call_tmp186;
  int32_t call_tmp187;
  int32_t call_tmp188;
  uint64_t call_tmp189;
  int32_t call_tmp190;
  _ref_uint8_t _ref_tmp_17 = NULL;
  syserr ret26;
  uint8_t i3;
  uint8_t call_tmp191;
  syserr call_tmp192;
  int32_t call_tmp193;
  int32_t call_tmp194;
  uint64_t call_tmp195;
  int32_t call_tmp196;
  _ref_uint8_t _ref_tmp_18 = NULL;
  syserr call_tmp197;
  int32_t call_tmp198;
  chpl_bool call_tmp199;
  qio_channel_ptr_t ret27;
  syserr ret28;
  syserr type_tmp9;
  _ref_syserr _ref_tmp_19 = NULL;
  syserr call_tmp200;
  syserr call_tmp201;
  int32_t call_tmp202;
  qio_channel_ptr_t ret29;
  int32_t call_tmp203;
  chpl_bool call_tmp204;
  chpl_string call_tmp205;
  chpl_string call_tmp206;
  c_string call_tmp207;
  c_string call_tmp208;
  chpl_string call_tmp209;
  int64_t call_tmp210;
  chpl_bool call_tmp211;
  c_string call_tmp212;
  c_string call_tmp213;
  chpl_string call_tmp214;
  int64_t call_tmp215;
  chpl_bool call_tmp216;
  (&this9)->skipWhitespaceOnly = false;
  (&this9)->skipWhitespaceOnly = false;
  wrap_call_tmp = _construct_ioNewline(false, &this9, _ln, _fn);
  args_x1 = _e0_args;
  args_x2 = _e1_args;
  args_x3 = _e2_args;
  args_x4 = _e3_args;
  args_x5 = _e4_args;
  args_x6 = _e5_args;
  args_x7 = wrap_call_tmp;
  _ref_tmp_ = &type_tmp;
  call_tmp = qio_int_to_err(INT32(0));
  *(_ref_tmp_) = call_tmp;
  e = type_tmp;
  _ref_tmp_2 = &e;
  args_x22 = _e1_args;
  args_x32 = _e2_args;
  args_x42 = _e3_args;
  args_x52 = _e4_args;
  args_x62 = _e5_args;
  _ref_tmp_3 = &_formal_tmp_error;
  call_tmp2 = qio_int_to_err(INT32(0));
  *(_ref_tmp_3) = call_tmp2;
  _ref_tmp_4 = &type_tmp2;
  call_tmp3 = qio_int_to_err(INT32(0));
  *(_ref_tmp_4) = call_tmp3;
  err = type_tmp2;
  _ref_tmp_5 = &err;
  _ref_tmp_6 = &_formal_tmp_error2;
  call_tmp4 = qio_int_to_err(INT32(0));
  *(_ref_tmp_6) = call_tmp4;
  ret2 = (this8)->_channel_internal;
  call_tmp5 = qio_channel_lock(ret2);
  _formal_tmp_error2 = call_tmp5;
  *(_ref_tmp_5) = call_tmp5;
  call_tmp6 = qio_err_iserr(err);
  call_tmp7 = (call_tmp6 != INT32(0));
  if (call_tmp7) {
    string_from_c_string(&call_tmp8, "in lock", INT64(0), INT64(0), _ln, _fn);
    _ch_ioerror(this8, err, call_tmp8, _ln, _fn);
  }
  call_tmp9 = qio_err_iserr(_formal_tmp_error);
  call_tmp10 = (call_tmp9 == INT32(0));
  if (call_tmp10) {
    ret3 = (this8)->_channel_internal;
    _ref_tmp_7 = &type_tmp3;
    call_tmp11 = qio_int_to_err(INT32(0));
    *(_ref_tmp_7) = call_tmp11;
    call_tmp12 = qio_channel_binary(ret3);
    call_tmp13 = qio_channel_byteorder(ret3);
    call_tmp14 = (call_tmp12 != UINT8(0));
    if (call_tmp14) {
      call_tmp15 = ((int16_t)(call_tmp13));
      call_tmp16 = ((int16_t)(iokind_big));
      call_tmp17 = (call_tmp15 == call_tmp16);
      if (call_tmp17) {
        call_tmp18 = qio_channel_str_style(ret3);
        c_string_from_string(&call_tmp19, &_e0_args, _ln, _fn);
        c_string_from_string(&call_tmp20, &_e0_args, _ln, _fn);
        call_tmp21 = string_length(call_tmp20);
        call_tmp23 = ((int32_t)(false));
        call_tmp24 = ((int32_t)(iokind_big));
        call_tmp22 = qio_channel_write_string(call_tmp23, call_tmp24, call_tmp18, ret3, call_tmp19, call_tmp21);
        ret4 = call_tmp22;
        goto _end__write_binary_internal;
        _end__write_binary_internal:;
        e2 = ret4;
      } else {
        call_tmp25 = ((int16_t)(call_tmp13));
        call_tmp26 = ((int16_t)(iokind_little));
        call_tmp27 = (call_tmp25 == call_tmp26);
        if (call_tmp27) {
          call_tmp28 = qio_channel_str_style(ret3);
          c_string_from_string(&call_tmp29, &_e0_args, _ln, _fn);
          c_string_from_string(&call_tmp30, &_e0_args, _ln, _fn);
          call_tmp31 = string_length(call_tmp30);
          call_tmp33 = ((int32_t)(false));
          call_tmp34 = ((int32_t)(iokind_little));
          call_tmp32 = qio_channel_write_string(call_tmp33, call_tmp34, call_tmp28, ret3, call_tmp29, call_tmp31);
          ret5 = call_tmp32;
          goto _end__write_binary_internal2;
          _end__write_binary_internal2:;
          e2 = ret5;
        } else {
          call_tmp35 = qio_channel_str_style(ret3);
          c_string_from_string(&call_tmp36, &_e0_args, _ln, _fn);
          c_string_from_string(&call_tmp37, &_e0_args, _ln, _fn);
          call_tmp38 = string_length(call_tmp37);
          call_tmp40 = ((int32_t)(false));
          call_tmp41 = ((int32_t)(iokind_native));
          call_tmp39 = qio_channel_write_string(call_tmp40, call_tmp41, call_tmp35, ret3, call_tmp36, call_tmp38);
          ret6 = call_tmp39;
          goto _end__write_binary_internal3;
          _end__write_binary_internal3:;
          e2 = ret6;
        }
      }
    } else {
      call_tmp42 = _write_text_internal2(ret3, _e0_args, _ln, _fn);
      e2 = call_tmp42;
    }
    _formal_tmp_error = e2;
  }
  call_tmp43 = qio_err_iserr(_formal_tmp_error);
  call_tmp44 = (call_tmp43 == INT32(0));
  if (call_tmp44) {
    ret7 = (this8)->_channel_internal;
    _ref_tmp_8 = &type_tmp4;
    call_tmp45 = qio_int_to_err(INT32(0));
    *(_ref_tmp_8) = call_tmp45;
    call_tmp46 = qio_channel_binary(ret7);
    call_tmp47 = qio_channel_byteorder(ret7);
    call_tmp48 = (call_tmp46 != UINT8(0));
    if (call_tmp48) {
      call_tmp49 = ((int16_t)(call_tmp47));
      call_tmp50 = ((int16_t)(iokind_big));
      call_tmp51 = (call_tmp49 == call_tmp50);
      if (call_tmp51) {
        call_tmp52 = qio_channel_str_style(ret7);
        call_tmp53 = string_length(args_x22);
        call_tmp55 = ((int32_t)(false));
        call_tmp56 = ((int32_t)(iokind_big));
        call_tmp54 = qio_channel_write_string(call_tmp55, call_tmp56, call_tmp52, ret7, args_x22, call_tmp53);
        ret8 = call_tmp54;
        goto _end__write_binary_internal4;
        _end__write_binary_internal4:;
        e3 = ret8;
      } else {
        call_tmp57 = ((int16_t)(call_tmp47));
        call_tmp58 = ((int16_t)(iokind_little));
        call_tmp59 = (call_tmp57 == call_tmp58);
        if (call_tmp59) {
          call_tmp60 = qio_channel_str_style(ret7);
          call_tmp61 = string_length(args_x22);
          call_tmp63 = ((int32_t)(false));
          call_tmp64 = ((int32_t)(iokind_little));
          call_tmp62 = qio_channel_write_string(call_tmp63, call_tmp64, call_tmp60, ret7, args_x22, call_tmp61);
          ret9 = call_tmp62;
          goto _end__write_binary_internal5;
          _end__write_binary_internal5:;
          e3 = ret9;
        } else {
          call_tmp65 = qio_channel_str_style(ret7);
          call_tmp66 = string_length(args_x22);
          call_tmp68 = ((int32_t)(false));
          call_tmp69 = ((int32_t)(iokind_native));
          call_tmp67 = qio_channel_write_string(call_tmp68, call_tmp69, call_tmp65, ret7, args_x22, call_tmp66);
          ret10 = call_tmp67;
          goto _end__write_binary_internal6;
          _end__write_binary_internal6:;
          e3 = ret10;
        }
      }
    } else {
      call_tmp70 = _write_text_internal3(ret7, args_x22, _ln, _fn);
      e3 = call_tmp70;
    }
    _formal_tmp_error = e3;
  }
  call_tmp71 = qio_err_iserr(_formal_tmp_error);
  call_tmp72 = (call_tmp71 == INT32(0));
  if (call_tmp72) {
    ret11 = (this8)->_channel_internal;
    _ref_tmp_9 = &type_tmp5;
    call_tmp73 = qio_int_to_err(INT32(0));
    *(_ref_tmp_9) = call_tmp73;
    call_tmp74 = qio_channel_binary(ret11);
    call_tmp75 = qio_channel_byteorder(ret11);
    call_tmp76 = (call_tmp74 != UINT8(0));
    if (call_tmp76) {
      call_tmp77 = ((int16_t)(call_tmp75));
      call_tmp78 = ((int16_t)(iokind_big));
      call_tmp79 = (call_tmp77 == call_tmp78);
      if (call_tmp79) {
        call_tmp80 = qio_channel_str_style(ret11);
        c_string_from_string(&call_tmp81, &args_x32, _ln, _fn);
        c_string_from_string(&call_tmp82, &args_x32, _ln, _fn);
        call_tmp83 = string_length(call_tmp82);
        call_tmp85 = ((int32_t)(false));
        call_tmp86 = ((int32_t)(iokind_big));
        call_tmp84 = qio_channel_write_string(call_tmp85, call_tmp86, call_tmp80, ret11, call_tmp81, call_tmp83);
        ret12 = call_tmp84;
        goto _end__write_binary_internal7;
        _end__write_binary_internal7:;
        e4 = ret12;
      } else {
        call_tmp87 = ((int16_t)(call_tmp75));
        call_tmp88 = ((int16_t)(iokind_little));
        call_tmp89 = (call_tmp87 == call_tmp88);
        if (call_tmp89) {
          call_tmp90 = qio_channel_str_style(ret11);
          c_string_from_string(&call_tmp91, &args_x32, _ln, _fn);
          c_string_from_string(&call_tmp92, &args_x32, _ln, _fn);
          call_tmp93 = string_length(call_tmp92);
          call_tmp95 = ((int32_t)(false));
          call_tmp96 = ((int32_t)(iokind_little));
          call_tmp94 = qio_channel_write_string(call_tmp95, call_tmp96, call_tmp90, ret11, call_tmp91, call_tmp93);
          ret13 = call_tmp94;
          goto _end__write_binary_internal8;
          _end__write_binary_internal8:;
          e4 = ret13;
        } else {
          call_tmp97 = qio_channel_str_style(ret11);
          c_string_from_string(&call_tmp98, &args_x32, _ln, _fn);
          c_string_from_string(&call_tmp99, &args_x32, _ln, _fn);
          call_tmp100 = string_length(call_tmp99);
          call_tmp102 = ((int32_t)(false));
          call_tmp103 = ((int32_t)(iokind_native));
          call_tmp101 = qio_channel_write_string(call_tmp102, call_tmp103, call_tmp97, ret11, call_tmp98, call_tmp100);
          ret14 = call_tmp101;
          goto _end__write_binary_internal9;
          _end__write_binary_internal9:;
          e4 = ret14;
        }
      }
    } else {
      call_tmp104 = _write_text_internal2(ret11, args_x32, _ln, _fn);
      e4 = call_tmp104;
    }
    _formal_tmp_error = e4;
  }
  call_tmp105 = qio_err_iserr(_formal_tmp_error);
  call_tmp106 = (call_tmp105 == INT32(0));
  if (call_tmp106) {
    ret15 = (this8)->_channel_internal;
    coerce_tmp = args_x42;
    _ref_tmp_10 = &type_tmp6;
    call_tmp107 = qio_int_to_err(INT32(0));
    *(_ref_tmp_10) = call_tmp107;
    call_tmp108 = qio_channel_binary(ret15);
    call_tmp109 = qio_channel_byteorder(ret15);
    call_tmp110 = (call_tmp108 != UINT8(0));
    if (call_tmp110) {
      call_tmp111 = ((int16_t)(call_tmp109));
      call_tmp112 = ((int16_t)(iokind_big));
      call_tmp113 = (call_tmp111 == call_tmp112);
      if (call_tmp113) {
        call_tmp115 = ((int32_t)(false));
        call_tmp116 = ((int32_t)(iokind_big));
        call_tmp117 = ((uint64_t)(INT64(4)));
        call_tmp118 = ((int32_t)(false));
        _ref_tmp_11 = &coerce_tmp;
        call_tmp114 = qio_channel_write_int(call_tmp115, call_tmp116, ret15, _ref_tmp_11, call_tmp117, call_tmp118);
        ret16 = call_tmp114;
        goto _end__write_binary_internal10;
        _end__write_binary_internal10:;
        e5 = ret16;
      } else {
        call_tmp119 = ((int16_t)(call_tmp109));
        call_tmp120 = ((int16_t)(iokind_little));
        call_tmp121 = (call_tmp119 == call_tmp120);
        if (call_tmp121) {
          call_tmp123 = ((int32_t)(false));
          call_tmp124 = ((int32_t)(iokind_little));
          call_tmp125 = ((uint64_t)(INT64(4)));
          call_tmp126 = ((int32_t)(false));
          _ref_tmp_12 = &coerce_tmp;
          call_tmp122 = qio_channel_write_int(call_tmp123, call_tmp124, ret15, _ref_tmp_12, call_tmp125, call_tmp126);
          ret17 = call_tmp122;
          goto _end__write_binary_internal11;
          _end__write_binary_internal11:;
          e5 = ret17;
        } else {
          call_tmp128 = ((int32_t)(false));
          call_tmp129 = ((int32_t)(iokind_native));
          call_tmp130 = ((uint64_t)(INT64(4)));
          call_tmp131 = ((int32_t)(false));
          _ref_tmp_13 = &coerce_tmp;
          call_tmp127 = qio_channel_write_int(call_tmp128, call_tmp129, ret15, _ref_tmp_13, call_tmp130, call_tmp131);
          ret18 = call_tmp127;
          goto _end__write_binary_internal12;
          _end__write_binary_internal12:;
          e5 = ret18;
        }
      }
    } else {
      call_tmp132 = _write_text_internal4(ret15, args_x42, _ln, _fn);
      e5 = call_tmp132;
    }
    _formal_tmp_error = e5;
  }
  call_tmp133 = qio_err_iserr(_formal_tmp_error);
  call_tmp134 = (call_tmp133 == INT32(0));
  if (call_tmp134) {
    ret19 = (this8)->_channel_internal;
    _ref_tmp_14 = &type_tmp7;
    call_tmp135 = qio_int_to_err(INT32(0));
    *(_ref_tmp_14) = call_tmp135;
    call_tmp136 = qio_channel_binary(ret19);
    call_tmp137 = qio_channel_byteorder(ret19);
    call_tmp138 = (call_tmp136 != UINT8(0));
    if (call_tmp138) {
      call_tmp139 = ((int16_t)(call_tmp137));
      call_tmp140 = ((int16_t)(iokind_big));
      call_tmp141 = (call_tmp139 == call_tmp140);
      if (call_tmp141) {
        call_tmp142 = qio_channel_str_style(ret19);
        c_string_from_string(&call_tmp143, &args_x52, _ln, _fn);
        c_string_from_string(&call_tmp144, &args_x52, _ln, _fn);
        call_tmp145 = string_length(call_tmp144);
        call_tmp147 = ((int32_t)(false));
        call_tmp148 = ((int32_t)(iokind_big));
        call_tmp146 = qio_channel_write_string(call_tmp147, call_tmp148, call_tmp142, ret19, call_tmp143, call_tmp145);
        ret20 = call_tmp146;
        goto _end__write_binary_internal13;
        _end__write_binary_internal13:;
        e6 = ret20;
      } else {
        call_tmp149 = ((int16_t)(call_tmp137));
        call_tmp150 = ((int16_t)(iokind_little));
        call_tmp151 = (call_tmp149 == call_tmp150);
        if (call_tmp151) {
          call_tmp152 = qio_channel_str_style(ret19);
          c_string_from_string(&call_tmp153, &args_x52, _ln, _fn);
          c_string_from_string(&call_tmp154, &args_x52, _ln, _fn);
          call_tmp155 = string_length(call_tmp154);
          call_tmp157 = ((int32_t)(false));
          call_tmp158 = ((int32_t)(iokind_little));
          call_tmp156 = qio_channel_write_string(call_tmp157, call_tmp158, call_tmp152, ret19, call_tmp153, call_tmp155);
          ret21 = call_tmp156;
          goto _end__write_binary_internal14;
          _end__write_binary_internal14:;
          e6 = ret21;
        } else {
          call_tmp159 = qio_channel_str_style(ret19);
          c_string_from_string(&call_tmp160, &args_x52, _ln, _fn);
          c_string_from_string(&call_tmp161, &args_x52, _ln, _fn);
          call_tmp162 = string_length(call_tmp161);
          call_tmp164 = ((int32_t)(false));
          call_tmp165 = ((int32_t)(iokind_native));
          call_tmp163 = qio_channel_write_string(call_tmp164, call_tmp165, call_tmp159, ret19, call_tmp160, call_tmp162);
          ret22 = call_tmp163;
          goto _end__write_binary_internal15;
          _end__write_binary_internal15:;
          e6 = ret22;
        }
      }
    } else {
      call_tmp166 = _write_text_internal2(ret19, args_x52, _ln, _fn);
      e6 = call_tmp166;
    }
    _formal_tmp_error = e6;
  }
  call_tmp167 = qio_err_iserr(_formal_tmp_error);
  call_tmp168 = (call_tmp167 == INT32(0));
  if (call_tmp168) {
    ret23 = (this8)->_channel_internal;
    _ref_tmp_15 = &type_tmp8;
    call_tmp169 = qio_int_to_err(INT32(0));
    *(_ref_tmp_15) = call_tmp169;
    call_tmp170 = qio_channel_binary(ret23);
    call_tmp171 = qio_channel_byteorder(ret23);
    call_tmp172 = (call_tmp170 != UINT8(0));
    if (call_tmp172) {
      call_tmp173 = ((int16_t)(call_tmp171));
      call_tmp174 = ((int16_t)(iokind_big));
      call_tmp175 = (call_tmp173 == call_tmp174);
      if (call_tmp175) {
        call_tmp176 = ((uint8_t)(args_x62));
        i = call_tmp176;
        call_tmp178 = ((int32_t)(false));
        call_tmp179 = ((int32_t)(iokind_big));
        call_tmp180 = ((uint64_t)(INT64(1)));
        call_tmp181 = ((int32_t)(false));
        _ref_tmp_16 = &i;
        call_tmp177 = qio_channel_write_int(call_tmp178, call_tmp179, ret23, _ref_tmp_16, call_tmp180, call_tmp181);
        ret24 = call_tmp177;
        goto _end__write_binary_internal16;
        _end__write_binary_internal16:;
        e7 = ret24;
      } else {
        call_tmp182 = ((int16_t)(call_tmp171));
        call_tmp183 = ((int16_t)(iokind_little));
        call_tmp184 = (call_tmp182 == call_tmp183);
        if (call_tmp184) {
          call_tmp185 = ((uint8_t)(args_x62));
          i2 = call_tmp185;
          call_tmp187 = ((int32_t)(false));
          call_tmp188 = ((int32_t)(iokind_little));
          call_tmp189 = ((uint64_t)(INT64(1)));
          call_tmp190 = ((int32_t)(false));
          _ref_tmp_17 = &i2;
          call_tmp186 = qio_channel_write_int(call_tmp187, call_tmp188, ret23, _ref_tmp_17, call_tmp189, call_tmp190);
          ret25 = call_tmp186;
          goto _end__write_binary_internal17;
          _end__write_binary_internal17:;
          e7 = ret25;
        } else {
          call_tmp191 = ((uint8_t)(args_x62));
          i3 = call_tmp191;
          call_tmp193 = ((int32_t)(false));
          call_tmp194 = ((int32_t)(iokind_native));
          call_tmp195 = ((uint64_t)(INT64(1)));
          call_tmp196 = ((int32_t)(false));
          _ref_tmp_18 = &i3;
          call_tmp192 = qio_channel_write_int(call_tmp193, call_tmp194, ret23, _ref_tmp_18, call_tmp195, call_tmp196);
          ret26 = call_tmp192;
          goto _end__write_binary_internal18;
          _end__write_binary_internal18:;
          e7 = ret26;
        }
      }
    } else {
      call_tmp197 = _write_text_internal5(ret23, args_x62, _ln, _fn);
      e7 = call_tmp197;
    }
    _formal_tmp_error = e7;
  }
  call_tmp198 = qio_err_iserr(_formal_tmp_error);
  call_tmp199 = (call_tmp198 == INT32(0));
  if (call_tmp199) {
    ret27 = (this8)->_channel_internal;
    _ref_tmp_19 = &type_tmp9;
    call_tmp200 = qio_int_to_err(INT32(0));
    *(_ref_tmp_19) = call_tmp200;
    call_tmp202 = ((int32_t)(false));
    call_tmp201 = qio_channel_write_newline(call_tmp202, ret27);
    ret28 = call_tmp201;
    goto _end__write_one_internal;
    _end__write_one_internal:;
    _formal_tmp_error = ret28;
  }
  ret29 = (this8)->_channel_internal;
  qio_channel_unlock(ret29);
  qio_err_iserr(_formal_tmp_error);
  *(_ref_tmp_2) = _formal_tmp_error;
  call_tmp203 = qio_err_iserr(e);
  call_tmp204 = (call_tmp203 == INT32(0));
  if (call_tmp204) {
    ret = true;
    goto _end_write;
  } else {
    string_from_c_string(&call_tmp206, "", INT64(0), INT64(0), _ln, _fn);
    call_tmp205 = _args_to_proto2(args_x1, args_x2, args_x3, args_x4, args_x5, args_x6, &args_x7, call_tmp206, _ln, _fn);
    c_string_from_string(&call_tmp207, &call_tmp205, _ln, _fn);
    call_tmp208 = string_concat("in channel.write(", call_tmp207, _ln, _fn);
    string_from_c_string(&call_tmp209, call_tmp208, INT64(0), INT64(0), _ln, _fn);
    call_tmp210 = string_length(call_tmp208);
    call_tmp211 = (call_tmp210 > INT64(0));
    if (call_tmp211) {
      chpl_rt_free_c_string(call_tmp208, _ln, _fn);
    }
    c_string_from_string(&call_tmp212, &call_tmp209, _ln, _fn);
    call_tmp213 = string_concat(call_tmp212, ")", _ln, _fn);
    string_from_c_string(&call_tmp214, call_tmp213, INT64(0), INT64(0), _ln, _fn);
    call_tmp215 = string_length(call_tmp213);
    call_tmp216 = (call_tmp215 > INT64(0));
    if (call_tmp216) {
      chpl_rt_free_c_string(call_tmp213, _ln, _fn);
    }
    _ch_ioerror(this8, e, call_tmp214, _ln, _fn);
    ret = false;
    goto _end_write;
  }
  _end_write:;
  return ret;
}

/* IO.chpl:2193 */
static void writeln3(_real64 _e0_args, int64_t _ln, c_string _fn) {
  channel_T_dynamic_T local_stdout;
  _ref_channel_T_dynamic_T _ref_tmp_ = NULL;
  local_stdout = stdout2;
  _ref_tmp_ = &local_stdout;
  writeln(_ref_tmp_, _e0_args, _ln, _fn);
  return;
}
